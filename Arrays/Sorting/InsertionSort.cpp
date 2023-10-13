#include <iostream>
#include <algorithm>
using namespace std;


void insertionSort(int arr[],int n){
  for(int i=1;i<n;i++){

  int temp =arr[i];
  int j =i-1;
  for(;j>=0;j--){
    if(arr[j]>temp){
      // shift 
      arr[j+1]=arr[j];
    }
    else {
      break;
    }
  }
  arr[j+1]=temp;
  }


}
  int main(){
    int arr[5]={64 , 25 , 12 , 222 , 11};
    int size = 5;

    cout<<"Unsorted array is :-"<<endl;
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    insertionSort(arr , size);
    
    cout<<"Sorted array is :-"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
  }