// Zig - Zig Pattern or Spiral print of bianry tree

#include <iostream>
#include <queue>
#include <vector>
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

    cout << "Enter data for left of " << root->data << " node\n";
    root->left = buildTree(root->left);

    cout << "Enter data for the right of " << root->data << " node\n";
    root->right = buildTree(root->right);

    return root;
}
void ZigZagPattern(node *root, vector<int> &result)
{
    if (root == NULL)
    {
        return;
    }

    queue<node *> q;
    q.push(root);

    bool LeftToRight = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);

        // level process
        for (int i = 0; i < size; i++)
        {
            node *frontNode = q.front();
            q.pop();

            // normal insert krna hh yha reverse insert krna
            int index = LeftToRight ? i : size - i - 1;
            ans[index] = frontNode->data;

            if (frontNode->left)
            {
                q.push(frontNode->left);
            }

            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
        }
        // direction change
        LeftToRight = !LeftToRight;

        for (auto i : ans)
        {
            result.push_back(i);
        }
    }
}
int main()
{
    node *root = NULL;
    // creation of binary tree
    root = buildTree(root);
    vector<int> result;
    ZigZagPattern(root, result);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}