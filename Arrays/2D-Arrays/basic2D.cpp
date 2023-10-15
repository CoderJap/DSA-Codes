#include <iostream>
using namespace std;

int main(){
    // create a 2-D Array
    int arr[3][4];

    // Initializing a 2-D Array :-
    // 1. int arr[2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    // 2. int arr[3][4]={{1,11,111},{2,22,222},{3,33,333}};
    
    /* // taking row-wise input 
        for(int row=0;row<3;row++){
            for(int col=0;col<4;col++){
                cin>> arr[row][col];
        }
    } */

    // taking col-wise input 
        for(int col=0;col<4;col++){
            for(int row=0;row<3;row++){
                cin>> arr[row][col];
        }
    } 

//    printing 2-D array 
       for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
       }



       return 0;
}



