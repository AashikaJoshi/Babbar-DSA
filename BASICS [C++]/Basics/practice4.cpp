#include <iostream>
using namespace std;
// Print all prime numbers between 1 to N.

bool isPrime(int num)
{
  if (num <= 1)
  {
    return false;
  }
  else
  {
    for (int i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        return false;
      }
    }
  }
  return true;
}

int main()
{
  int num;
  cout << "Enter a number upto which you want count of prime numbers:" << endl;
  cin >> num;

  cout << "Prime numbers between 1 and " << num << " are:" << endl;
  for (int i = 1; i <= num; i++)
  {
    if (isPrime(i))
    {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}