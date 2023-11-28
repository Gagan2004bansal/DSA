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
void BuildTreeFromLevelOrder(node *&root)
{
    int data;
    cout << "Enter data for root : ";
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
        cout << "Enter data for " << temp->data << " left Node : ";
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter data for " << temp->data << " right Node : ";
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    node *leftans = LCA(root->left, n1, n2);
    node *rightans = LCA(root->right, n1, n2);

    if (leftans != NULL && rightans != NULL)
    {
        return root;
    }
    else if (leftans != NULL && rightans == NULL)
    {
        return leftans;
    }
    else if (leftans == NULL && rightans != NULL)
    {
        return rightans;
    }
    else
    {
        return NULL;
    }
}
int main()
{
    node *root = NULL;
    BuildTreeFromLevelOrder(root);

    int n1, n2;
    cout << endl
         << "Enter n1 and n2 : ";
    cin >> n1 >> n2;
    node *res = LCA(root, n1, n2);
    cout << "LCA : " << res->data << endl;
    return 0;
}
