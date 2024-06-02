#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;

    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }

    ~node()
    {
        delete left;
        delete right;
    }
};

node *binarytree()
{
    int x;
    // cout << "Enter the root value: ";
    cin >> x;
    if (x == -1)
        return NULL;

    node *root = new node(x);
    cout << "Enter left child of " << x << ":" << endl;
    root->left = binarytree();
    cout << "Enter right child of " << x << ":" << endl;
    root->right = binarytree();

    return root;
}

void preordered(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preordered(root->left);
    preordered(root->right);
}

void inordered(node *root)
{
    if (root == NULL)
        return;
    inordered(root->left);
    cout << root->data << " ";
    inordered(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelorder(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

int getsize(node *root)
{
    if (root == NULL)
        return 0;
    return 1 + getsize(root->left) + getsize(root->right);
}

void sumoftree(node *root, int &sum)
{
    if (root == NULL)
        return;

    sum += root->data;
    sumoftree(root->left, sum);
    sumoftree(root->right, sum);
}

void countleaf(node *root, int &count)
{
    if (root == NULL)
        return;

    if (!root->left && !root->right)
    {
        count++;
        return;
    }

    countleaf(root->left, count);
    countleaf(root->right, count);
}

int countnonleaf(node *root)
{
    if (root == NULL)
        return 0;

    if (!root->left && !root->right)
    {
        return 0;
    }

    return (1 + countnonleaf(root->left) + countnonleaf(root->right));
}

int heightoftree(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    // if (!root->left && !root->right)
    // {
    //     return 0;
    // }

    return 1 + max(heightoftree(root->left), heightoftree(root->right));
}

int largestvalueineachlevel(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        int maxi = -1;
        for (int i = 0; i < size; i++)
        {
            node *temp = q.front();
            q.pop();

            if (temp->data > maxi)
            {
                maxi = temp->data;
            }

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }

        cout << "Maximum value at level " << size - 1 << ": " << maxi << endl;
    }
}
int main()
{
    cout << "Create Binary Tree:" << endl;
    cout << "Enter the root node" << endl;
    node *root = binarytree();
    if (root == NULL)
    {
        cout << "Tree is empty." << endl;
        return 0;
    }

    cout << "Preorder Traversal: ";
    preordered(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inordered(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    cout << "Level Order Traversal: ";
    levelorder(root);
    cout << endl;

    // cout << "Size of the tree: " << getsize(root) << endl;

    // delete root;

    int sum = 0;
    sumoftree(root, sum);
    cout << "Sum of binary tree: " << sum << endl;

    int count = 0;
    countleaf(root, count);
    cout << "count of leaf node: " << count << endl;

    cout << "count of non leaf node " << countnonleaf(root);

    cout << endl;
    cout << "height of binary tree is " << heightoftree(root) << endl;

    largestvalueineachlevel(root);
}
