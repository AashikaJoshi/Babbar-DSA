#include<iostream>
using namespace std;
//reversing an array.
int main(){
    
    int n=4;
    
    int arr[4]={10,20,30,40};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
     }
    cout<<endl;
     int i=0;
    int j=n-1;
     while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
     }


    return 0;
}