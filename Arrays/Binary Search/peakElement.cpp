//Ques - find peak element in a mountain array ( pehle slope incr krega fir peak ayegi and fir slope decr krega /\  )

//Approach - If for mid index , 
// 1.arr[mid]<arr[mid+1]:
//This element lies in the incr slope / ascend search in the right half => start = mid+1.
//In all other cases 
//This element lies in the decr slope/descend or is the peak element itself . Since mid can be the peak element , Search in the left half 
//incl mid , end=mid ( since if mid is peak so -1 se peeche chal jayega mid thats why end = mid)

#include<iostream>
using namespace std;

int peak(int arr[],int size){
    int s=0;
    int e=size-1;

    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
        s=mid+1;
        }

        else{
        e=mid;
        }
    }
    return s;
}

int main(){
    int arr[4]={0,10,5,2};
    int ans = peak(arr,4);
    cout<<"Peak element is: "<< ans<<endl;
    return 0;
}


