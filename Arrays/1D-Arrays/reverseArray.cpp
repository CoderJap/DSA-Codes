#include <iostream>
#include<algorithm>
using namespace std ;
void reverseArray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]); 
        start++;
        end--;
    }

}
int main(){
    int arr[5]={5,0,1,4,8};
    reverseArray(arr,5);
    cout<<"Reversed Array is: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}