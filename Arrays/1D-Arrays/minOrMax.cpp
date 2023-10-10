#include <iostream>
using namespace std ;
int getMax(int num[],int n){
    int max=-1;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getMin(int num[],int n){
    int min=10000;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}


int main(){
    int size ;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Max is:"<<getMax(num,size)<<endl;
    cout<<"Min is:"<<getMin(num,size)<<endl;

    return 0;
}