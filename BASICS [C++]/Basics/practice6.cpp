#include <iostream>
using namespace std;

// Fibonacci series up to N terms.

int main()
{
    int n;
    cout << "Enter a number :" << endl;
    cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci series is: " << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}