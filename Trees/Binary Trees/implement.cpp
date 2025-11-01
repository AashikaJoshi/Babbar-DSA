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
int main(){
    //10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1 
    Node* root=BuildTree();
    return 0;
}