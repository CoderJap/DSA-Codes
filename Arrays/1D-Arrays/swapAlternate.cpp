//Approach - Given an array , say [1,2,3,4,5,] we will run a for loop from 0 to n-2 and swap arr[i] with arr[i+1] . If we reach the last element,
//we will stop,so check (i+1)th element < size of array .

#include<iostream>
#include<algorithm>
using namespace std;

void swapAlt(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    swapAlt(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }
    return 0;

}
