// ques :-
// i/p-> {2 , 0 , 1 , 3 , 0 , 0 , 0}
// o/p-> {2 , 1 , 3 , 0 , 0 , 0 , 0}


#include <iostream>
using namespace std;

// basically shift all non-eroes to the right 
void moveZeroes(int nums[],int n){
    int nonZero=0;
    for(int j=0;j<n;j++){
        if(nums[j]!=0){
            swap(nums[j],nums[nonZero]);
            nonZero++;
        }
    }

}

int main(){
    int arr[7]={2 , 0 , 1 , 3 , 0 , 8 , 0};
    int size =7;

    moveZeroes(arr , size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;

}

