#include <iostream>
using namespace std;
#define MAX 5
class Queue
{
    int arr[MAX];
    int front;
    int rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }
    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }
    bool isFull()
    {
        return (rear == MAX - 1);
    }
    void Enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue Overflow!" << endl;
            return;
        }
        else
        {
            arr[++rear] = x;
            cout << x << " enqueued into queue." << endl;
        }
    }
    void Dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow!" << endl;
            return;
        }
        else
        {
            cout << arr[front] << " Dequeued from queue." << endl;
            front = front + 1;
        }
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
        }
        return arr[front];
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        else
        {
            cout << "Queue elements are : " << endl;
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
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
    q.peek();
    q.Dequeue();
    q.display();
    return 0;
}