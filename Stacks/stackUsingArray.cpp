#include <iostream>
using namespace std;
#define MAX 5

class Stack
{
    int arr[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {

        return (top == -1);
    }
    bool isFull()
    {
        return (top == MAX - 1);
    }
    void push(int x)
    {
        if (isFull())
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            top = top + 1;
            arr[top] = x;
            cout << x << " pushed into stack." << endl;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            cout << arr[top] << " popped out of stack." << endl;
             top = top - 1;
        }
    }
    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Top element is : " << arr[top] << endl;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Stack elements are : " << endl;
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
   // s.push(40);
    //s.push(50);
    s.display();
    s.pop();
    s.pop();
    s.display();
    s.peek();
}
