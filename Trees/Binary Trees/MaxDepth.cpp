#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
Node* BuildTree(){
    int value;
    cin>>value;
    if(value==-1){
        return NULL;
    }
    Node* root=new Node(value);
    root->left=BuildTree();
    root->right=BuildTree();
    return root;
}
int maxD(Node* root){
    if(root==nullptr){
        return 0;
    }
    int lefth=maxD(root->left)+1;
    int righth=maxD(root->right)+1;
    int ans=max(lefth,righth);
    return ans;
}
int main(){
    //10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1 
    Node* root=BuildTree();
    cout<<endl;
    cout<<"The maximum depth of the Tree is : "<<maxD(root);
    cout<<endl;
    return 0;
}