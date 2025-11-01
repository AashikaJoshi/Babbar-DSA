#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    int target;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void InsertAtEnd(int val, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        Node *newnode = new Node(val);
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *newnode = new Node(val);
        tail->next = newnode;
        tail = newnode;
    }
}
int SizeOfLinkedList(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
    //cout << "The size of Linked List is : " << count << endl;
}
void DeleteBeg(Node *&head)
{
    if (head == NULL)
    {
        cout << "Empty linked list!" << endl;
    }
    else
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
}
void DeleteFromPosition(int position,Node* &head,Node* &tail){
    int length=SizeOfLinkedList(head);
    if(head==NULL){
        cout<<"Empty list"<<endl;
    }
    if(position>length){
        return;
    }
    if(head==tail && head!=NULL){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    else{
        Node* prev=head;
        Node* curr=prev->next;
        Node* forw=curr->next;
        for (int i = 0; i < position-2; i++)
        {
            prev=prev->next;
        }
        curr->next=NULL;
        prev->next=forw;
        delete curr;

    }
}

void PrintLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    InsertAtEnd(10, head, tail);
    InsertAtEnd(20, head, tail);
    InsertAtEnd(30, head, tail);
    InsertAtEnd(40, head, tail);

    PrintLinkedList(head);
    cout << endl;
    DeleteBeg(head);
    DeleteFromPosition(2,head,tail);
    DeleteFromPosition(2,head,tail);
    cout << "After Deleting.." << endl;
    PrintLinkedList(head);
   // cout << endl;
   // SizeOfLinkedList(head);
    return 0;
}