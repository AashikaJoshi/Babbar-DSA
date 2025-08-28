#include <iostream>
using namespace std;

// Print numbers from 1 to N using a loop.
// Print the sum of first N natural numbers.
// Print the multiplication table of a number.
// Count digits in a number.
// Reverse a number (e.g. 1234 → 4321).

int main()
{
    int n;
    int x;
    int sum = 0;
    int a;
    int b;
    int count = 0;
    int num;
    int reverse = 0;
    int digit;

    cout << "Enter a number to print loop" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }

    cout << "Enter a number" << endl;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of first N natural number is : " << sum << endl;

    cout << "Enter a number to print a table for:" << endl;
    cin >> a;
    for (int i = 0; i <= a; i++)
    {
        cout << a << "X" << i << "=" << a * i << endl;
    }

    cout << "Enter a number :" << endl;
    cin >> b;
    if (b == 0)
    {
        count = 1;
    }
    else
    {
        while (b != 0)
        {
            b = b / 10;
            count++;
        }
    }
    cout << "Digits in the number are : " << count << endl;

    cout << "Enter a number :" << endl;
    cin >> num;
    if (num == 0)
    {
        cout<<"0";
    }
    else
    {
        while (num != 0)
        {
            digit = num % 10;
            reverse = reverse * 10 + digit;
            num = num / 10;
        }
    }
    cout << "The reversed number is : " << reverse << endl;

    return 0;
}