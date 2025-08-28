#include <iostream>
using namespace std;
// Take input of two numbers and print their sum.
// Input a number and print if it is positive, negative, or zero
// Input marks of 5 subjects and calculate the average and percentage.
// Input a character and print its ASCII value.
int main()
{
    int a;
    int b;
    int n;
    float maths;
    float english;
    float science;
    float hindi;
    float sanskrit;
    float avg;
    float percent;
    float sum;
    char ch;

    cout << "Enter two numbers: " << endl;
    cin >> a;
    cin >> b;
    cout << "The Sum is: " << " " << (a + b) << endl;

    cout << "Enter a number" << endl;
    cin >> n;
    if (n == 0)
    {
        cout << "Zero" << endl;
    }
    else if (n > 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }

    cout << "Enter marks of Maths,Science,Sanskrit,Hindi,Engish(from 100) : " << endl;
    cin >> maths;
    cin >> science;
    cin >> sanskrit;
    cin >> hindi;
    cin >> english;
    sum = (maths + science + sanskrit + hindi + english);
    avg = sum / 5;
    percent = (sum / 500) * 100;
    cout << "The average is: " << avg << "." << endl;
    cout << "The percentage is : " << percent << "%" << endl;

    cout << "Enter a character : " << endl;
    cin >> ch;
    cout << "Its ASCII value is: " << int(ch) << endl;

    return 0;
}
