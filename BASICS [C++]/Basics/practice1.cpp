#include <iostream>
using namespace std;

// Check if a number is even or odd.
// Check if a number is divisible by both 3 and 5.
// Find the largest among three numbers.
// Check if a year is a leap year or not.

int main()
{
    int n;
    int x;
    int a;
    int b;
    int c;
    int year;

    cout << "Enter a number" << endl;
    cin >> n;
    if ((n % 2) == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    cout << "Enter a number: " << endl;
    cin >> x;
    if ((x % 3) == 0 && (x % 5) == 0)
    {
        cout << "The number is divisible by both 3 and 5." << endl;
    }
    else
    {
        cout << "Not divisible by both 3 and 5." << endl;
    }

    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    if ((a > b) && (a > c))
    {
        cout << "Largest number is : " << a << endl;
    }
    else if ((b > c) && (b > a))
    {
        cout << "Largest number is: " << b << endl;
    }
    else
    {
        cout << "Largest number is: " << c << endl;
    }

    cout << "Enter a year to check if it is leap year or not:" << endl;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "It is a leap year" << endl;
    }
    else
    {
        cout << " It is not a leap year" << endl;
    }

    return 0;
}