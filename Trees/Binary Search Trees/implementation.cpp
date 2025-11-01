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
void LevelOrderTraversal(Node *root)
{
    // empty Case
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q; // create a queue
    // initial state maintain
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // first step
        Node *front = q.front();
        q.pop();
        // to print each level in different line.
        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            { // if q is empty and we insert null then inifinite loop fas skta hai.
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " ";
            // second step simulatenously
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}
int main()
{
    
    Node *root = NULL;
    root = createBST(root);
    cout << endl;
    cout << "Printing PreOrder Traversal : " << endl;
    PreOrderTraversal(root);
    cout << endl;
    cout << "Printing InOrder Traversal : " << endl;
    InOrderTraversal(root);
    cout << endl;
    cout << "Printing PostOrder Traversal : " << endl;
    PostOrderTraversal(root);
    cout << endl;
    cout << "Printing LevelOrder Traversal : " << endl;
    LevelOrderTraversal(root);
    return 0;
}