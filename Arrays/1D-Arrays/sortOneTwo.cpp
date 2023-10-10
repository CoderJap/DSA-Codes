//Approach - Maintain 2 pointing variables i and j , i=0 & j=n-1 . In any condn ,  if:
//      1.arr[i]==0->i++
//      2.arr[j]==1->j--
//      3.arr[i]==1 && arr[j]==0 -> swap them and i++,j--


#include<iostream>
#include<algorithm>
using namespace std;
void sortOneTwo(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

int main(){
    int arr[8]={1,0,0,1,1,1,0,1};
    sortOneTwo(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}