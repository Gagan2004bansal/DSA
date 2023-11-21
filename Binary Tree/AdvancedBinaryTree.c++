#include <iostream>
#include <queue>
#include <stack>
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
// In this Program we build Binary Tree using BuildfromLevelTrasversal
void BuildfromLevelTrasversal(node *&root)
{
    queue<node *> q;

    int data;
    cout << "Enter data for main root : ";
    cin >> data;

    root = new node(data);

    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int leftdata;
        cout << "Enter data for left of " << temp->data << " root ";
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        int rightdata;
        cout << "Enter data for right of " << temp->data << " root";
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
void ReverseLevelOrderTrasversal(node *root)
{
    stack<node *> s;
    queue<node *> q;
    q.push(root);
    cout << endl
         << endl;
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        s.push(root);

        if (root->right)
        {
            q.push(root->right);
        }
        if (root->left)
        {
            q.push(root->left);
        }
    }
    while (!s.empty())
    {
        root = s.top();
        cout << root->data << " ";
        s.pop();
    }
}
int main()
{
    node *root = NULL;

    // Building of BinaryTree
    BuildfromLevelTrasversal(root);
    // Calling for Printing bottom to top node
    ReverseLevelOrderTrasversal(root);

    return 0;
}