#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start =0;
    int end = size-1;
    int mid =start +(end - start)/2;
    while(start<=end){
        if(arr[mid]==key)
        return mid;

        // go to righ wala part
        if(key>arr[mid])
        start=mid+1; //neglecting left part

        else
        end=mid-1;

         mid =start +(end - start)/2;
    }
    return -1;
}
int main(){
    int arr[5]={3,6,8,54,78};
    int key =78;
    int ans = binarySearch(arr,5,key);
    cout<<ans<<endl; // returns index of the key if found otherwise returns -1 if the key is not there in the array 
    return 0;
    
}

//Note :-
//time Complexity -> 0(log n)
