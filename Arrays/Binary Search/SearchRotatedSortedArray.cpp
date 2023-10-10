//Approach - We know thge values at 0th index and (n-1)th index 
// add comments 

#include <iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid =s + (e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;

        }
        mid = s+(e-s)/2;
    }

    return s ;

}
int binarySearch(int arr[],int size ,int s,int e,int key){
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
int findPos(int arr[],int n,int k){
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1]){
        //BS ON SECOND LINE
        return binarySearch(arr,n,pivot,n-1,k);
    }
    else{
        //BS ON FIRST LINE 
        return binarySearch(arr,n,0,pivot,k);
    }
}
int main(){
    int arr[5]={7,9,1,2,3};
    int ans=findPos(arr,5,3);
    cout<<"ans is :"<<ans<<endl;
    return 0;

}

