#include <iostream>
using namespace std;

void PrintSum(int arr[][3],int row , int col){
        for(int col=0;col<3;col++){
            int sum=0;
           for(int row=0;row<3;row++){
            sum+=arr[row][col];
           }
           cout<<sum<<" ";

       }
       cout<<endl;
}

int main(){
    int arr[3][3];
    //input elements in a 2d array 
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    //printing 
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Printing Sum -->"<<endl;
    PrintSum(arr,3,3);





    return 0;
}