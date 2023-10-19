#include <iostream>
#include <queue>
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
node *BuildTree(node *root)
{
    int data;
    cout << "Enter data for Root : ";
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Entering the data for left node of " << data << endl;
    root->left = BuildTree(root->left);

    cout << "Entering the data for right node of" << data << endl;
    root->right = BuildTree(root->right);

    return root;
}
void TrasversalBinaryTree(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
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
void leafCountNodes(node *root, int &count)
{
    // Base Case
    if (root == NULL)
    {
        return;
    }

    leafCountNodes(root->left, count);
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    leafCountNodes(root->right, count);
}
int main()
{
    node *root = NULL;

    // creating of Binary tree
    root = BuildTree(root);
    // Trasversal of Binary tree
    cout << "Binary Tree Representation" << endl;
    TrasversalBinaryTree(root);

    // leaf count
    int count = 0;
    leafCountNodes(root, count);
    cout << "Leaf Count Nodes : " << count;
    return 0;
}