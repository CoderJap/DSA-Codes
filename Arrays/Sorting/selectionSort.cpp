// add comments


#include <iostream>
#include <algorithm>
using namespace std; 



void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
    int minIndex = i;

    for(int j =i+1; j<n ;j++){
        if(arr[j]<arr[minIndex])
        minIndex=j;
    }
    swap(arr[minIndex] , arr[i]);

    }

  }

  int main(){
    int arr[5]={64 , 25 , 12 , 22 , 11};
    int size = 5;

    cout<<"Unsorted array is :-"<<endl;
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    selectionSort(arr , size);
    
    cout<<"Sorted array is :-"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
  }







  
