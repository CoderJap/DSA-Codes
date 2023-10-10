#include <iostream>
using namespace std;

bool isSorted(int *arr , int size){
    //base case 
    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1]){
        return false;
    }

    else {
    bool remPart = isSorted(arr+1,size-1);
    return remPart;
    }
    
}


int main(){
 int arr[6]={2,4,6,8,654,78};
 int size =6;
 bool ans = isSorted(arr,size);
 if(ans){
    cout<<"Array is sorted"<<endl;

 }
 else{
    cout<<"Array is not sorted"<<endl;
 }

 return 0;


    
}