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
void MinELement(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    cout << "Minimium element : " << temp->data << " " << endl;
}
void MaxELement(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    cout << "Maximum element : " << temp->data << " " << endl;
}
int main()
{
    Node *root = NULL;
    cout << "Enter all data in BST \n";
    inputBST(root);
    MinELement(root);
    MaxELement(root);
    return 0;
}