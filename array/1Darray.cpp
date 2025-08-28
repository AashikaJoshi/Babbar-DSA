#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}
void PrintTwice(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<(2*arr[i])<<",";

    }
}
void PrintEvenOdd(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        int number=arr[i];
        if(number%2==0){
            cout<<"Even"<<endl;
        }
        else{
            cout<<"Odd"<<endl;
        }
    }
  
}
void CountZeroesOnes(int arr[],int size){
    int totalZeroes=0;
    int totalOnes=0;
    for(int i=0;i<=size-1;i++){
        int num=arr[i];
        if(num==0){
            totalZeroes++;
        }
        else if(num==1){
            totalOnes++;
        }
    }
     cout<<"Total zeroes: "<<totalZeroes<<endl;
     cout<<"Total ones: "<<totalOnes<<endl;
}

int main(){
    //int arr[10];
   /* char arr[10];
    int n;
   cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    for(int i=0;i<=n-1;i++){
        cout<<"Taking input for index : "<<i<<endl;
        cin>>arr[i];
      
 }
 cout<<"Printing the array : "<<endl;
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }*/
int arr[10]={0,1,1,0,1};
int size=5;
//PrintArray(arr,size);
//PrintTwice(arr,size);
//PrintEvenOdd(arr,size);
CountZeroesOnes(arr,size);


 return 0;
}