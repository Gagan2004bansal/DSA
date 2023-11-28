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

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
int positionFind(int element, vector<int> in, int inOrderStart, int inOrderEnd)
{
    for (int i = inOrderStart; i <= inOrderEnd; i++)
    {
        if (element == in[i])
        {
            return i;
        }
    }
    return -1;
}
node *Solve(vector<int> in, vector<int> pre, int n, int &preOrderIndex, int inOrderStart, int inOrderEnd)
{
    if (preOrderIndex >= n || inOrderStart > inOrderEnd)
    {
        return NULL;
    }

    int element = pre[preOrderIndex];
    node *root = new node(element);
    int position = positionFind(element, in, inOrderStart, inOrderEnd);

    preOrderIndex++;

    root->left = Solve(in, pre, n, preOrderIndex, inOrderStart, position - 1);
    root->right = Solve(in, pre, n, preOrderIndex, position + 1, inOrderEnd);
    return root;
}
void PostOrderTraversal(node *ans)
{
    if (ans == NULL)
    {
        return;
    }

    PostOrderTraversal(ans->left);
    PostOrderTraversal(ans->right);

    cout << ans->data << " ";
}
int main()
{
    int preOrderIndex = 0;
    vector<int> in = {1, 6, 8, 7};
    vector<int> pre = {1, 6, 7, 8};

    int n = pre.size();
    node *ans = Solve(in, pre, n, preOrderIndex, 0, n - 1);
    PostOrderTraversal(ans);
    return 0;
}

////   USE ONLINE COMPILER FOR THIS QUESTION
////     VS CODE GIVE SOME UNEXPECTED ERROR