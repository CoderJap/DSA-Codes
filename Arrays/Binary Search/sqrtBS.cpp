

// Find the square root ( integer part) using binary search   // not working 

#include <iostream>
using namespace std;

int sqrtBS(int n){
    int s=0,e=n;
    int mid=s+(e-s)/2;

    int ans=-1;
    while(s<=e){
        int square = mid*mid ;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;

        }
        else{
            mid=s+(e-s)/2;

        }
       
    }
     return ans;
}

int main(){
    int n ;
    cin>>n;
    int ans =sqrtBS(n);
    cout<<"sqrt is :"<<ans<<endl;
    return 0;

}