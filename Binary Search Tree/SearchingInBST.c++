#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertDataInBST(Node *root, int data)
{
    // Base Case
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    // if data is greater than root ka data
    if (data > root->data)
    {
        root->right = insertDataInBST(root->right, data);
    }
    else
    { // if data is less than root ka data
        root->left = insertDataInBST(root->left, data);
    }

    return root;
}
void inputBST(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertDataInBST(root, data);
        cin >> data;
    }
}
void DisplayBST(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            // If there is data in left part of root then it add to queue
            if (temp->left)
            {
                q.push(temp->left);
            }
            // If there is data in right part of root then it add to queue
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
bool searchInBST(Node *root, int x)
{
    Node *temp = root;

    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }

        if (x < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
}
int main()
{
    Node *root = NULL;
    // Calling for Input
    cout << "Enter all data for BST \n";
    inputBST(root);
    cout << "Displaying Binary Search Tree\n";
    DisplayBST(root);
    int x;
    cout << "Enter element you want to search in BST : ";
    cin >> x;
    bool ans = searchInBST(root, x);
    if (ans)
    {
        cout << "Data : " << x << " is present \n";
    }
    else
    {
        cout << "Data is not present\n";
    }

    return 0;
}