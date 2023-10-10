// Ques - Find the first and last occurrence of an element in an array.

//Approach for findind first occurence - Applying binary search , if at any instance mid is such that arr[mid]==key , then :
//  1.either this is the first occurence itself.
//  2.or there are more key towards the left of mid.
//So we will temporarily store mid and then search in the left half by making the end=mid-1.
//If arr[mid]<key , then search in right half by making start = mid+1.
//If arr[mid]>key , then search in the left half by making end = mid-1;

//Approach for findind last occurence - Applying binary search , if at any instance mid is such that arr[mid]==key , then :
//  1.either this is the last occurence itself.
//  2.or there are more key towards the right of mid.
//So we will temporarily store mid and then search in the right half by making the start = mid+1.
//If arr[mid]<key , then search in right half by making start = mid+1.
//If arr[mid]>key , then search in the left half by making end = mid-1;

#include <iostream>
using namespace std;

int firstOcc(int arr[],int n , int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){ // Right me jao
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}


int lastOcc(int arr[],int n , int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){ // Right me jao
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int arr[8]={1,1,2,3,4,4,4,4};
    int key =1;
    cout<<"First occurence of "<<key<<" is: "<<firstOcc(arr,8,key)<<endl;
    cout<<"Last occurence of "<<key<<" is: "<<lastOcc(arr,8,key)<<endl;
    return 0;
}


//Notes :-
// if aksed count the no.of occurences of an element in a sorted array then = (last occ index) - (first occ index) +1 


