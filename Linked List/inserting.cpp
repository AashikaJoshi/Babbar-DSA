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
void InsertAtBegin(int val, Node *&head, Node *&tail)
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
        newnode->next = head;
        head = newnode;
    }
}
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
    cout << "The size of Linked List is : " << count << endl;
}
void InsertAtPosition(int val, int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        InsertAtBegin(val, head, tail);
        return;
    }
    int length = SizeOfLinkedList(head);
    if (position == length - 1)
    {
        InsertAtEnd(val, head, tail);
        return;
    }
    else
    {
        Node *newnode = new Node(val);
        Node *temp = head;
        for (int i = 1; i <= position - 2; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void Search(int target, Node *&head)
{
    if (head == NULL)
    {
        cout << "Empty ll . Node not found." << endl;
    }
    else
    {
        int pos = 1;
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == target)
            {
                cout << "Target found at position : " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Target not found!" << endl;
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
    InsertAtBegin(10, head, tail);
    InsertAtBegin(20, head, tail);
    InsertAtBegin(30, head, tail);
    InsertAtEnd(40, head, tail);
    InsertAtPosition(50, 3, head, tail);
    PrintLinkedList(head);
    cout << endl;
    Search(10, head);
    cout << endl;
    SizeOfLinkedList(head);
    return 0;
}