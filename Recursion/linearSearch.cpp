#include<iostream>
using namespace std;

bool linearSearch(int *arr , int size , int k){
    //base case 
    if(size==0){
        return false;

    }
    if(arr[0]==k){
        return true;

    }
    else{
        bool remPart=linearSearch(arr+1,size-1,k);

        return remPart;
    }

}

int main(){
    int arr[5]={3,5,1,2,6};
    int size=5;

    bool ans=linearSearch(arr,5,7);
    if(ans){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;

}