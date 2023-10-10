#include<iostream> 
using namespace std;

fib(int n){
    //base case 
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    //Recursive Relation

    int ans=fib(n-1)+fib(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans=fib(n);

    cout<<n+1<<"th term in fibonacci series is : "<<ans<<endl;

}


