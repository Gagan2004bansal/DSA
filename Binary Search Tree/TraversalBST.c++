#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

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
    cin >> data;

    while (data != -1)
    {
        root = insertDataInBST(root, data);
        cin >> data;
    }
}
void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
void PreOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void Postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    Node *root = NULL;
    cout << "Enter all data in BST\n";
    inputBST(root);

    // Inorder  -- L N R
    cout << "Inorder Traversal : ";
    Inorder(root);
    cout << endl;
    // PreOrder  -- N L R
    cout << "Preorder Traversal : ";
    PreOrder(root);
    cout << endl;
    // Postorder  -- L R N
    cout << "Postorder Traversal : ";
    Postorder(root);
    cout << endl;
    return 0;
}