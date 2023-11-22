#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
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
void buildFromLevelTraversal(node *&root)
{
    queue<node *> q;
    int data;
    cout << "Enter data for root : ";
    cin >> data;

    root = new node(data);
    if (data == -1)
    {
        return;
    }

    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter data for " << temp->data << " node";
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter data for " << temp->data << " node";
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
class solution
{
public:
    vector<int> verticalOrder(node *root)
    {
        map<int, map<int, vector<int>>> nodes;
        queue<pair<node *, pair<int, int>>> q;
        vector<int> ans;

        if (root == NULL)
        {
            return ans;
        }

        q.push(make_pair(root, make_pair(0, 0)));

        while (!q.empty())
        {
            pair<node *, pair<int, int>> temp = q.front();
            q.pop();
            node *frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            nodes[hd][lvl].push_back(frontNode->data);

            if (frontNode->left)
                q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));

            if (frontNode->right)
                q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
        }

        for (auto i : nodes)
        {
            for (auto j : i.second)
            {
                for (auto k : j.second)
                {
                    ans.push_back(k);
                }
            }
        }

        return ans;
    }
};
int main()
{
    node *root = NULL;
    buildFromLevelTraversal(root);

    solution s1;
    vector<int> res = s1.verticalOrder(root);
    for (int i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}