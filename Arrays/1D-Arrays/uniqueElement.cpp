//Approach - The XOR  of same numbers is 0 . 5 ^ 5 ^ 1 = 1(Both 5 will get cancel out )
//We can find XOR of all numbers , which will give us the only element occuring once 

#include <iostream>
using namespace std ;
int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];

    }
    return ans;
}
int main(){
    int arr[7]={1,2,8,2,1,7,7};
    int ans = findUnique(arr,7);
    cout<<"Unique element is : "<<ans<<endl;

}
