//Ques - Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice,
//return an array of all the integers that appears twice.

//Approach - XOR all the elements of the array with 1,2,3,4..,n-1 

#include<iostream>
using namespace std;

int findDup(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
     for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    int arr[5]={4,2,1,3,1};
    int ans = findDup(arr,5);
    cout<<ans<<endl;
    return 0;
}