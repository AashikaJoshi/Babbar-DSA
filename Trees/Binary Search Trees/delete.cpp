#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *BuildBST(Node *root, int value)
{
    if (root == NULL)
    {
        root = new Node(value);
        return root;
    }
    else
    {
        if (value > root->data)
        {
            root->right = BuildBST(root->right, value);
        }
        else
        {
            root->left = BuildBST(root->left, value);
        }
        return root;
    }
}
Node *createBST(Node *root)
{

    int valu;
    cout << "Enter the value for the node: " << endl;

    cin >> valu;

    while (valu != -1)
    {
        root = BuildBST(root, valu);
        cout << "Enter the value for the node: " << endl;

        cin >> valu;
    }
    return root;
}
void PreOrderTraversal(Node *root)
{ // NLR
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // N
    cout << root->data << " ";
    // L
    PreOrderTraversal(root->left);
    // R
    PreOrderTraversal(root->right);
}
void InOrderTraversal(Node *root)
{ // LNR
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // L
    InOrderTraversal(root->left);
    // N
    cout << root->data << " ";
    // R
    InOrderTraversal(root->right);
}
void PostOrderTraversal(Node *root)
{ // LRN
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // L
    PostOrderTraversal(root->left);
    // R
    PostOrderTraversal(root->right);
    // N
    cout << root->data << " ";
}
int getMax(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}
Node *deleteNode(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (root->left == NULL && root->right == NULL)
        {
            Node *temp = root;
            delete temp;
            return NULL;
        }
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root;
            Node *child = root->left;
            temp->left = NULL;
            delete temp;
            return child;
        }
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root;
            Node *child = root->right;
            temp->right = NULL;
            delete temp;
            return child;
        }
        if (root->left != NULL && root->right != NULL)
        {
            int replaceVal = getMax(root->left);
            root->data = replaceVal;
            root->left = deleteNode(root->left, replaceVal);
            return root;
        }
    }
    else
    {
        if (key > root->data)
        {
            root->right = deleteNode(root->right, key);
        }
        else
        {
            root->left = deleteNode(root->left, key);
        }
    }
    return root;
}

int main()
{
    Node *root = NULL;
    root = createBST(root);
    cout << endl;
    deleteNode(root, 4);
    cout << "After deleting 4 , BST is : " << endl;
    InOrderTraversal(root);
    cout << endl;
    deleteNode(root, 7);
    cout << "After deleting 7 , BST is : " << endl;
    InOrderTraversal(root);
    cout << endl;
    deleteNode(root, 15);
    cout << "After deleting 15 , BST is : " << endl;
    InOrderTraversal(root);
    cout << endl;

    return 0;
}