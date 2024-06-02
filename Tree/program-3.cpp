#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelorder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}
Node *insertdatabst(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertdatabst(root->right, data);
    }

    else
    {
        root->left = insertdatabst(root->left, data);
    }

    return root;
}

Node *minval(Node *&root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp;
}

Node *maxval(Node *&root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    return temp;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertdatabst(root, data);
        cin >> data;
    }
}
int main()
{
    Node *root = NULL;
    cout << "Enter data to bst" << endl;
    takeInput(root);
    cout << "printing the bst" << endl;
    levelorder(root);

    cout << "minimum value of tree:" << minval(root)->data << endl;
    cout << "minimum value of tree:" << maxval(root)->data << endl;
}