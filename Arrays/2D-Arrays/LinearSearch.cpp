#include <iostream>
using namespace std;

bool isPresent(int arr[][3],int target , int row , int col){
        for(int row=0;row<3;row++){
          for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }
          }
        }
        
        return 0;
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
    cout<<"Enter Element to search "<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,3)){
        cout<<"Element Found"<<endl;

    }
    else{
        cout<<"Element Not Found"<<endl;

    }

    return 0;
}