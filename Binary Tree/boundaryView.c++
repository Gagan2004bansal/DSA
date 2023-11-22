#include <iostream>
#include <vector>
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
    cout << "Enter data : ";
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for " << root->data << " left node" << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for " << root->data << " right node" << endl;
    root->right = buildTree(root->right);

    return root;
}
class Solution
{
public:
    void trasverseLeft(node *root, vector<int> &ans)
    {
        if ((root == NULL) || (root->left == NULL && root->right == NULL))
        {
            return;
        }
        ans.push_back(root->data);

        trasverseLeft(root->left, ans);
        trasverseLeft(root->right, ans);
    }
    void trasverseLeaf(node *root, vector<int> &ans)
    {
        // base case
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
            return;
        }

        trasverseLeaf(root->left, ans);
        trasverseLeaf(root->right, ans);
    }
    void trasverseRight(node *root, vector<int> &ans)
    {
        // Base Case
        if (root == NULL || (root->left == NULL && root->right == NULL))
        {
            return;
        }

        if (root->right)
        {
            trasverseRight(root->right, ans);
        }
        else
        {
            trasverseRight(root->left, ans);
        }

        ans.push_back(root->data);
    }
    vector<int> BoundaryCheck(node *root)
    {
        vector<int> ans;
        // base case
        if (root == NULL)
        {
            return ans;
        }

        ans.push_back(root->data);
        // left
        trasverseLeft(root->left, ans);
        // leaf node
        trasverseLeaf(root->left, ans);
        trasverseLeaf(root->right, ans);
        // right node
        trasverseRight(root->right, ans);

        return ans;
    }
};

int main()
{
    node *root = NULL;

    root = buildTree(root);

    Solution obj1;
    vector<int> res = obj1.BoundaryCheck(root);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}