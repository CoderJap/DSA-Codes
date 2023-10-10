#include <iostream>
using namespace std;


void bubbleSort(int *arr,int n ){
    //base case - already sorted 
    if(n==0 || n==1){
        return ;
    }
    // 1 case solve krlia - largest element ko end mei rkh diya 
    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    // recursive call 
    bubbleSort(arr,n-1);

}

int main (){
    int arr[7]={38,27,43,3,9,82,10};
    int size =7;
    bubbleSort(arr,size);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;

}

