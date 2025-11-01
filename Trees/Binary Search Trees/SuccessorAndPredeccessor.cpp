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
Node* rightMostInLS(Node* root){
    Node* ans;
    while(root!=NULL){
        ans=root;
        root=root->right;
    }
    return ans;
}
Node* leftMostInRS(Node* root){
    Node* ans;
    while(root!=NULL){
        ans=root;
        root=root->left;
    }
    return ans;
}
pair<int,int> getPredSucc(Node* root,int key){
    Node* curr=root;
    Node* succ=NULL;
    Node* pred=NULL;
    while(curr!=NULL){
     if(key<curr->data){
        succ=curr;
        curr=curr->left;
     }
     else if(key>curr->data){
        pred=curr;
        curr=curr->right;
     }
     else{
        if(curr->left!=NULL){
             pred=rightMostInLS(curr->left);
        }
         if(curr->right!=NULL){
             succ=leftMostInRS(curr->right);
        }
        break;
     }
    }
     int predVal = (pred != NULL) ? pred->data : -1;
    int succVal = (succ != NULL) ? succ->data : -1;
 return {predVal,succVal};
}
int main(){
    Node* root=NULL;
    root = createBST(root);
    cout << endl;
    auto result = getPredSucc(root, 6);
cout << "Predecessor: " << result.first << ", Successor: " << result.second << endl;
    //cout<<"The predeccessor and successor of 6 is : "<< endl;
    //getPredSucc(root,6);
    return 0;
}