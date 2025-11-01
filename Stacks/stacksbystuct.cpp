#include <iostream>
using namespace std;
#define MAX 5

typedef struct
{
    int arr[MAX];
    int top;

} stack;
stack init()
{
    stack S;
    S.top = -1;
    return S;
}

int isEmpty(stack &S)
{

    return (S.top == -1);
}
int isFull(stack &S)
{
    return (S.top == MAX - 1);
}
void push(stack &S, int x)
{
    if (isFull(S))
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        S.top = S.top + 1;
        S.arr[S.top] = x;
        cout << x << " pushed into stack." << endl;
    }
}
void pop(stack &S)
{
    if (isEmpty(S))
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        cout << S.arr[S.top] << " popped out of stack." << endl;
        S.top = S.top - 1;
    }
}
void peek(stack &S)
{
    if (isEmpty(S))
    {
        cout << "Stack is Empty." << endl;
    }
    else
    {
        cout << "Top element is : " << S.arr[S.top] << endl;
    }
}
void display(stack &S)
{
    if (isEmpty(S))
    {
        cout << "Stack is Empty." << endl;
    }
    else
    {
        cout << "Stack elements are : " << endl;
        for (int i = 0; i <= S.top; i++)
        {
            cout << S.arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    stack S;
    S = init();
    push(S, 10);
    push(S, 20);
    push(S, 30);
    push(S, 40);
    push(S, 50);
    display(S);
    pop(S);
    pop(S);
    display(S);
    peek(S);
    return 0;
}
