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
bool searchBST(Node *root, int target)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == target)
    {
        return true;
    }
    else
    {
        if (target < root->data)
        {
            int leftAns = searchBST(root->left, target);
            if (leftAns == true)
            {
                return true;
            }
        }
        if (target > root->data)
        {
            int rightAns = searchBST(root->right, target);
            if (rightAns == true)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{

    Node *root = NULL;
    root = createBST(root);
    cout << endl;
    cout << "Search if 60 is in tree : " << searchBST(root, 60);
    cout << endl;
    return 0;
}