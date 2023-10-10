// sum of elements of array using recursion 

#include<iostream>
using namespace std;

int getSum(int *arr , int size){
    //base 
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];

    }
    

    int remPart= getSum(arr+1,size-1);
    int sum=arr[0]+remPart;
    return sum;

}
int main(){
    int arr[5]={2,4,9,9,9};
    int size=5;
    int sum =getSum(arr,size);

    cout<<sum<<endl;

    return 0;


}