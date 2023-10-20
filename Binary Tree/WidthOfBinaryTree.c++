#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    int data;
    cout << "Enter data for root : ";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new node(data);

    cout << "Enter data for left of root " << data << endl;
    root->left = buildTree(root->left);

    cout << "ENter data for right of root " << data << endl;
    root->right = buildTree(root->right);

    return root;
}
void TrasverseBinaryTree(node *root)
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
pair<int, int> diameterFast(node *root)
{
    // Base Case
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    int opt1 = left.first;
    int opt2 = right.first;
    int opt3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(opt1, max(opt2, opt3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}
void diameter(node *root)
{
    cout << "Diameter of Binary Tree : " << diameterFast(root).first << endl;
}
int main()
{
    node *root = NULL;
    // Creation of Binary Tree
    root = buildTree(root);

    // Trasverse of Binary Tree
    TrasverseBinaryTree(root);

    // Calling Diameter
    diameter(root);
    return 0;
}