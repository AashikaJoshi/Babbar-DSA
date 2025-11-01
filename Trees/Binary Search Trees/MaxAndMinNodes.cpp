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
int getMin(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
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
int main()
{
    
    Node *root = NULL;
    root = createBST(root);
    cout << endl;
    cout << "The Min value of node in tree is : " << getMin(root) << endl;
    cout << "The Max value of node in tree is : " << getMax(root) << endl;
    return 0;
}