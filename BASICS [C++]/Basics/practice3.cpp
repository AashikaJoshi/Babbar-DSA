#include <iostream>
using namespace std;

// Check if a number is a palindrome (121, 1331, etc.)
// Check if a number is prime.

int main()
{
    int reverse = 0;
    int num;
    int digit;

    cout << "Enter a number : " << endl;
    cin >> num;
    int original = num;
    if (num == 0)
    {
        return 0;
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
    cout << reverse << endl;
    if (reverse == original)
    {
        cout << "It is a palindrome" << endl;
    }
    else
    {
        cout << "It is not a palindrome" << endl;
    }

    int n;
    bool isPrime = true;
    cout << "Enter a number to check if it is prime or not" << endl;
    cin >> n;

    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
    {
        cout << "It is a Prime number." << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }
    return 0;
}