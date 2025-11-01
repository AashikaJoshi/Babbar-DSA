#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }
    bool isEmpty()
    {
        return (front == NULL);
    }
    void Enqueue(int x)
    {
        Node *newnode = new Node(x);
        if (rear == NULL)
        {
            front = rear = newnode;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
        }
        cout << x << " Enqueued into Queue." << endl;
    }
    void Dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!" << endl;
        }
        else
        {
            Node *temp = front;
            cout << temp->data << " Dequeued from Queue." << endl;
            front = front->next;
            if (front == NULL)
            {
                rear = NULL;
            }
            delete temp;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            Node *temp = front;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    ~Queue()
    {
        Node *temp;
        while (front != NULL)
        {
            temp = front;
            front = front->next;
            delete temp;
        }
    }
};
int main()
{
    Queue q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.display();
    q.Dequeue();
    q.display();
    cout << "Front element is : " << q.peek() << endl;
    return 0;
}
