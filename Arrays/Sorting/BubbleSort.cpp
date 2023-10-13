// comments 

#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=1 ; i<n ;i++){
        // for round 1 to round n-1 
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap ( arr[j], arr[j+1]);

            }
        }
    }
}

  int main(){
    int arr[5]={64 , 25 , 12 , 100 , 11};
    int size = 5;

    cout<<"Unsorted array is :-"<<endl;
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    bubbleSort(arr , size);
    
    cout<<"Sorted array is :-"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
  }