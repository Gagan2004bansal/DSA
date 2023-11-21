#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    // constructor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
// build tree using level order transvrsal
void buildLevelOrderTrasversal(node *&root)
{
    int data;
    cout << "Enter data for the root : ";
    cin >> data;
    queue<node *> q;
    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter data for " << temp->data << " left node : ";
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter data for " << temp->data << " right node : ";
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
pair<bool, int> CheckSumTree(node *root)
{
    // Base Case
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    // if leaf node
    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> leftAns = CheckSumTree(root->left);
    pair<bool, int> rightAns = CheckSumTree(root->right);

    bool leftSumTree = leftAns.first;
    bool rightSumTree = rightAns.first;

    int leftSum = leftAns.second;
    int rightSum = rightAns.second;

    bool condition = root->data == leftSum + rightSum;

    pair<bool, int> ans;
    if (leftSumTree && rightSumTree && condition)
    {
        ans.first = true;
        ans.second = root->data + leftSum + rightSum;
    }
    else
    {
        ans.first = false;
    }

    return ans;
}
int isSumTree(node *root)
{
    return CheckSumTree(root).first;
}
int main()
{
    node *root = NULL;
    // creation of binary tree
    buildLevelOrderTrasversal(root);
    // checking is sum tree
    if (isSumTree(root))
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
    return 0;
}