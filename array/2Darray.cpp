#include<iostream>
using namespace std;

int main (){
    
    int arr[3][2];
    cout<<"Enter the elements of rows and columns : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
            cout<<endl;
        }
    }
        cout<<"The row wise transversal elements are: "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<2;j++){
                cout<<arr[i][j]<<",";
            }
            cout<<endl;
        }
        cout<<"The column wise transversal elements are : "<<endl;
        for(int j=0;j<2;j++){
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<<",";
            }
            cout<<endl;
        }

        return 0;
    }