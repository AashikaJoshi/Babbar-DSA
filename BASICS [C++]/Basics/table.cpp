#include<iostream>
using namespace std;

//function declaration and definition
int main()
   {
      int n;
      cout<<"Enter a number you want table for: "<<endl;
      cin>>n;
      
      
      int i=0;
    do{
      cout<<n<<"X"<<i<<"="<<n*i<<endl;
       i++;
    }while(i<=10);
    return 0;
   }
  