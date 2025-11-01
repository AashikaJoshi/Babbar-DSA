#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        next = NULL;
    }
};
class Stack
{
    Node *head;

public:
    Stack()
    {
        head = NULL;
    }
    void push(int x)
    {
        Node *newnode = new Node(x);
        newnode->next = head;
        head = newnode;
        cout << x << " is pushed into stack." << endl;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
        }
        else
        {
            Node *temp = head;
            cout << temp->data << " is popped." << endl;
            head = head->next;
            delete temp;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        return head->data;
    }
    bool isEmpty()
    {
        return (head == NULL);
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
        }
        else
        {
            cout << "Stack elements are: " << endl;
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    ~Stack()
    {
        Node *temp;
        while (head != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    s.pop();
    s.display();
    s.peek();
    return 0;
}