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
void buildFromLevelOrder(node *&root)
{
    int data;
    cout << "Enter data for the root : ";
    cin >> data;

    if (data == -1)
    {
        return;
    }
    root = new node(data);
    queue<node *> q;
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
class Solution
{
private:
    bool FastCheck(node *root, int sum, int targetSum)
    {
        if (root == nullptr)
        {
            return false;
        }

        sum = sum + root->data;

        if (root->left == nullptr && root->right == nullptr && sum == targetSum)
        {
            return true;
        }

        return FastCheck(root->left, sum, targetSum) || FastCheck(root->right, sum, targetSum);
    }

public:
    bool PairSum(node *root, int targetSum)
    {
        if (root == NULL)
        {
            return false;
        }
        int sum = 0;
        return FastCheck(root, sum, targetSum);
    }
};
int main()
{
    node *root = nullptr;
    buildFromLevelOrder(root);
    int targetSum;
    cout << "TargetSum : ";
    cin >> targetSum;

    Solution o1;
    if (o1.PairSum(root, targetSum))
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }

    return 0;
}