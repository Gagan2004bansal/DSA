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
node *buildTree(node *root)
{
    int data;
    cout << "Enter data for root node : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new node(data);

    cout << "Enter data for left node of root " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for right node of root " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
void TrasverseTree(node *root)
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
int Height(node *root, int depth)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = Height(root->left, depth);
    int right = Height(root->right, depth);

    depth = max(left, right) + 1;

    return depth;
}
int main()
{
    node *root = NULL;

    // Creation of Binary Tree
    root = buildTree(root);

    // Trasverse the binary tree
    TrasverseTree(root);

    // Finding depth/height of Binary Tree
    int depth = 0;
    int heightofBinaryTree = Height(root, depth);
    cout << "Height of Binary Tree : " << heightofBinaryTree << endl;

    return 0;
}