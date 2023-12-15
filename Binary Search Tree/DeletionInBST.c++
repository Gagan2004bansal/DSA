#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertDataInBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    // If data is greater than root -> data
    if (data > root->data)
    {
        root->right = insertDataInBST(root->right, data);
    }
    else
    {
        root->left = insertDataInBST(root->left, data);
    }

    return root;
}
void inputBST(Node *&root)
{
    int data;
    cout << "Enter all data for BST \n";
    cin >> data;
    while (data != -1)
    {
        root = insertDataInBST(root, data);
        cin >> data;
    }
}
Node *MinInBST(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp;
}
Node *DeleteFromBST(Node *root, int data)
{
    // Base Case
    if (root == NULL)
    {
        return root;
    }

    if (root->data == data)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        // left
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = MinInBST(root->right)->data;
            root->data = mini;
            root->right = DeleteFromBST(root->right, data);
            return root;
        }
    }
    else if (data > root->data)
    {
        root->right = DeleteFromBST(root->right, data);
        return root;
    }
    else
    {
        root->left = DeleteFromBST(root->left, data);
        return root;
    }
    cout << endl;
}
void DisplayingBST(Node *root)
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
    inputBST(root);
    cout << endl
         << "Displaying BST before deletion";
    cout << endl;
    DisplayingBST(root);
    cout << endl;
    int kill;
    cout << "Enter data to delete : ";
    cin >> kill;
    Node *DeletedNode = DeleteFromBST(root, kill);
    cout << endl
         << "Displaying BST After deletion";
    cout << endl;
    DisplayingBST(DeletedNode);
    cout << endl;
    return 0;
}