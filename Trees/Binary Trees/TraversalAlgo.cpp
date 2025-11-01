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
Node *BuildTree()
{
    int value;
    cin >> value;
    if (value == -1)
    {
        return NULL;
    }
    Node *root = new Node(value);
    root->left = BuildTree();
    root->right = BuildTree();
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
    // 10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1
    Node *root = BuildTree();
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