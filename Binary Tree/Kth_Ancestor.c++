#include <iostream>
#include <algorithm>
#include <queue>
#include <climits>
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
void BuildFromLevelOrder(node *&root)
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
node *Solve(node *root, int &k, int node1)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == node1)
    {
        return root;
    }

    node *leftAns = Solve(root->left, k, node1);
    node *rightAns = Solve(root->right, k, node1);

    if (leftAns != NULL && rightAns == NULL)
    {
        k--;
        if (k <= 0)
        {
            k = INT_MAX;
            return root;
        }
        return leftAns;
    }

    if (leftAns == NULL && rightAns != NULL)
    {
        k--;
        if (k <= 0)
        {
            k = INT_MAX;
            return root;
        }
        return rightAns;
    }

    return NULL;
}
void Kth_Ancestor(node *root)
{
    int k, node1;
    cout << "Enter Node for you which you want Kth Ancestor : ";
    cin >> node1;

    cout << "Enter which Kth Ancestor you want : ";
    cin >> k;

    node *res = Solve(root, k, node1);
    if (res == NULL || res->data == node1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << res->data << endl;
    }
}
int main()
{
    node *root = NULL;
    BuildFromLevelOrder(root);
    Kth_Ancestor(root);
    return 0;
}