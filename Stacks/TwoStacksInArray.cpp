#include <iostream>
using namespace std;
#define MAX 10
class stack
{
    int arr[MAX];
    int top1;
    int top2;

public:
    stack()
    {
        top1 = -1;
        top2 = MAX;
    }
    void push1(int value)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack Overflow!" << endl;
        }
        else

        {
            top1 = top1 + 1;
            arr[top1] = value;
        }
    }
    void push2(int value)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            top2 = top2 - 1;
            arr[top2] = value;
        }
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {

            top1 = top1 - 1;
        }
    }
    void pop2()
    {
        if (top2 == MAX)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            top2 = top2 + 1;
        }
    }
    void display()
    {
        cout << "Stack1: ";
        for (int i = 0; i <= top1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Stack2: ";
        for (int i = MAX - 1; i >= top2; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    stack s;
    s.push1(10);
    s.push1(20);
    s.display();
    s.push2(30);
    s.push2(40);
    s.push2(50);
    s.display();
    s.pop1();
    s.pop2();
    s.display();
    return 0;
}