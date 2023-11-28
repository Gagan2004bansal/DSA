#include <iostream>
#include <queue>
#include <map>
using namespace std;
class Node
{
public:
    int data; //  MICROSOFT  ADOBE  AMAZON
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void BuildFromLevelOrder(Node *&root)
{
    int data;
    cout << "Enter data for root : \n";
    cin >> data;

    if (data == -1)
    {
        return;
    }

    root = new Node(data);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter data for " << temp->data << " left Node : ";
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter data for " << temp->data << " right Node : ";
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
Node *CreateParentMapping(Node *root, int target, map<Node *, Node *> &nodeToParent)
{
    Node *res = NULL;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front->data == target)
        {
            res = front;
        }

        if (front->left)
        {
            q.push(front->left);
            nodeToParent[front->left] = front;
        }

        if (front->right)
        {
            q.push(front->right);
            nodeToParent[front->right] = front;
        }
    }

    return res;
}
int BurningTree(Node *targetNode, map<Node *, Node *> nodeToParent)
{
    map<Node *, bool> visited;
    int ans = 0;
    queue<Node *> q;
    q.push(targetNode);
    visited[targetNode] = true;

    while (!q.empty())
    {
        int size = q.size();
        bool flag = 0;

        for (int i = 0; i < size; i++)
        {
            Node *front = q.front();
            q.pop();

            if (front->left && !visited[front->left])
            {
                q.push(front->left);
                visited[front->left] = true;
                flag = 1;
            }

            if (front->right && !visited[front->right])
            {
                q.push(front->right);
                visited[front->right] = true;
                flag = 1;
            }

            if (nodeToParent[front] && !visited[nodeToParent[front]])
            {
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]] = true;
                flag = 1;
            }
        }

        if (flag == 1)
        {
            ans++;
        }
    }

    return ans;
}
int MinTimeToBurnTree(Node *root, int target)
{
    map<Node *, Node *> nodeToParent;
    Node *targetNode = CreateParentMapping(root, target, nodeToParent);
    int ans = BurningTree(targetNode, nodeToParent);

    return ans;
}
int main()
{
    Node *root = NULL;
    BuildFromLevelOrder(root);
    int target;
    cout << "Target Node : ";
    cin >> target;

    int result = MinTimeToBurnTree(root, target);
    cout << "Time : " << result << endl;
    return 0;
}