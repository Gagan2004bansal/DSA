// Compare two binary tree or check whether both tree are identical are not

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    int data;
    cout << "Enter data : ";
    cin >> data;

    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left of " << data << " node \n";
    root->left = buildTree(root->left);

    cout << "Enter data for right of " << data << " node \n";
    root->right = buildTree(root->right);

    return root;
}
int identicalTrees(node *a, node *b)
{
    /*1. both empty */
    if (a == NULL && b == NULL)
        return 1;

    /* 2. both non-empty -> compare them */
    if (a != NULL && b != NULL)
    {
        return (a->data == b->data && identicalTrees(a->left, b->left) && identicalTrees(a->right, b->right));
    }

    /* 3. one empty, one not -> false */
    return 0;
}
int main()
{
    node *root1 = NULL;
    node *root2 = NULL;

    // creation of 1st binary tree
    buildTree(root1);
    cout << endl;
    buildTree(root2);

    cout << identicalTrees(root1, root2) << endl;
    return 0;
}