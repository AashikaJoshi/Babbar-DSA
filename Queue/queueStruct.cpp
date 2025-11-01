#include <iostream>
using namespace std;
#define MAXLEN 5

typedef struct
{
    int element[MAXLEN];
    int rear, front;
} queue;
queue init()
{
    queue Q;
    Q.front = -1;
    Q.rear = -1;
    return Q;
}
int isEmpty(queue Q)
{
    return (Q.front == -1) || (Q.front > Q.rear);
}
int isFull(queue Q)
{
    return (Q.rear == MAXLEN - 1);
}
int Front(queue Q)
{
    if (isEmpty(Q))
    {
        cout << "Queue Underflow!" << endl;
        return -1;
    }
    else
    {
        return Q.element[Q.front];
    }
}
queue Enqueue(queue Q, int x)
{
    if (isFull(Q))
    {
        cout << "Queue Overflow!" << endl;
    }
    else if (isEmpty(Q))
    {
        Q.rear = Q.front = 0;
        Q.element[Q.rear] = x;
    }
    else
    {
        Q.rear++;
        Q.element[Q.rear] = x;
    }
    return Q;
}
queue Dequeue(queue Q)
{
    if (isEmpty(Q))
    {
        cout << "Queue Underflow!" << endl;
        return Q;
    }
    else
    {
        Q.front++;
        if (Q.front > Q.rear) {
    Q.front = Q.rear = -1;
}
        return Q;
    }
}

void display(queue Q)
{
    if (isEmpty(Q))
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        cout << "The queue is : " << endl;
        for (int i = Q.front; i <= Q.rear; i++)
        {
            printf("%d", Q.element[i]);
        }
    }
}

int main()
{
    queue Q=init();
    int choice;
    while (true) 
    {
        cout << "\n-----MENU-----" << endl;
        cout << "1) isEmpty()" << endl;
        cout << "2) isFull()" << endl;
        cout << "3) Front()" << endl;
        cout << "4) Enqueue()" << endl;
        cout << "5) Dequeue()" << endl;
        cout << "6) Display()" << endl;
        cout << "7) Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
    
    switch (choice)
    {
    case 1:
       
        cout << (isEmpty(Q) ? "Queue is Empty" : "Queue is Not Empty") << endl;
        break;
    case 2:
     
        cout << (isFull(Q) ? "Queue is Full" : "Queue is Not Full") << endl;

        break;
    case 3:
       cout << "Front element: " << Front(Q) << endl;
     
        break;
    case 4:
       Q=Enqueue(Q,3);
     //  Q=Enqueue(Q,4);
       //Q=Enqueue(Q,5);



    case 5:
       
        Q = Dequeue(Q);
        Q = Dequeue(Q);
        display(Q);
        break;
        case 6:
        display(Q);
        break;
    }
}
}