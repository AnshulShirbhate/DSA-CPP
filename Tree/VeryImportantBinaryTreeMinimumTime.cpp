#include <bits/stdc++.h>
using namespace std;

Node *createParentMapping(Node *root, int target, map<Node *, Node *> &nodeToParent)
{
    Node *result = NULL;
    queue<Node *> q;
    q.push(root);
    nodeToParent[root] = NULL;

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        if (front->data == target)
        {
            result = front;
        }
        if (front->left)
        {
            nodeToParent[front->left] = front;
            q.push(front->left);
        }
        if (front->right)
        {
            nodeToParent[front->right] = front;
            q.push(front->right);
        }
    }
    return result;
}


int burnTree(Node *root, map<Node *, Node *> &nodeToParent)
{
    map<Node *, bool> visited;
    queue<Node *> q;
    q.push(root);
    visited[root] = true;
    int ans = 0;
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
                flag = 1;
                q.push(front->left);
                visited[front->left] = true;
            }
            if (front->right && !visited[front->right])
            {
                flag = 1;
                q.push(front->right);
                visited[front->right] = true;
            }

            if (nodeToParent[front] && !visited[nodeToParent[front]])
            {
                flag = 1;
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]] = true;
            }
        }
        if (flag == 1)
        {
            ans++;
        }
    }
    return ans;
}

int minTime(Node *root, int target)
{
    // Algorithm
    /*
    1. create Node to Parent mapping
    2. Find target Node
    3. Burn the tree in Min time
    */

    int ans = 0;
    map<Node *, Node *> nodeToParent;
    Node *targetNode = createParentMapping(root, target, nodeToParent);
    ans = burnTree(targetNode, nodeToParent);
    return ans;
}

int main()
{

    int target = 2;
    minTime(root, target);
}