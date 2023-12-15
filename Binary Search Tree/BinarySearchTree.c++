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

    // if data is greater than root data
    if (data > root->data)
    {
        root->right = insertDataInBST(root->right, data);
    }
    else
    { // if data is less than root data
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
void levelOrderTraversal(Node *root)
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

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    Node *root = NULL;
    // insert data in BST
    cout << "Enter data in BST \n";
    inputBST(root);

    // displaying data in BST
    cout << "Displaying Data of Binary Search Tree\n";
    levelOrderTraversal(root);
    return 0;
}