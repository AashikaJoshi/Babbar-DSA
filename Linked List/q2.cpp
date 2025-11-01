#include <iostream>
using namespace std;

class Node
{
public:
    int data;
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
void occurrence(int key,Node* &head){
      Node* temp=head;
      int count=0;
      while(temp!=NULL){
        if(temp->data==key){
            count++;
        }
        temp=temp->next;
      }
        cout<<"Count: "<<count<<endl;

        while(head!=NULL && head->data == key){
            Node* temp1=head;
            head=head->next;
            temp1->next=NULL;
            delete temp1;
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
   
   InsertAtEnd(1, head, tail);
    InsertAtEnd(2, head, tail);
    InsertAtEnd(1, head, tail);
    InsertAtEnd(2, head, tail);
    InsertAtEnd(1, head, tail);
    InsertAtEnd(3, head, tail);
    InsertAtEnd(1, head, tail);
    PrintLinkedList(head);
    occurrence(1,head);
    PrintLinkedList(head);


    return 0;
}