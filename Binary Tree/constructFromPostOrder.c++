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
node *Solve(vector<int> in, vector<int> post, int n, int &postOrderIndex, int inOrderStart, int inOrderEnd)
{
    if (postOrderIndex < 0 || inOrderStart > inOrderEnd)
    {
        return NULL;
    }

    int element = post[postOrderIndex];
    node *root = new node(element);
    int position = positionFind(element, in, inOrderStart, inOrderEnd);

    postOrderIndex--;

    root->right = Solve(in, post, n, postOrderIndex, position + 1, inOrderEnd);
    root->left = Solve(in, post, n, postOrderIndex, inOrderStart, position - 1);
    return root;
}
void PreOrderTraversal(node *ans)
{
    if (ans == NULL)
    {
        return;
    }

    cout << ans->data << " ";

    PreOrderTraversal(ans->left);
    PreOrderTraversal(ans->right);
}
int main()
{
    vector<int> in = {1, 6, 8, 7};
    vector<int> post = {1, 6, 7, 8};

    int n = post.size();
    int postOrderIndex = n - 1;
    node *ans = Solve(in, post, n, postOrderIndex, 0, n - 1);
    PreOrderTraversal(ans);
    return 0;
}

////   USE ONLINE COMPILER FOR THIS QUESTION
////     VS CODE GIVE SOME UNEXPECTED ERROR