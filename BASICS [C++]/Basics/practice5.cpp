#include <iostream>
using namespace std;
// Print factorial of a number.
int printFact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    int ans = printFact(num);
    cout << "The factorial of " << num << " is: " << ans << endl;

    return 0;
}