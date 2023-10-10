#include <iostream>
using namespace std; 

int partition(int arr[] , int s , int e ){
    int pivot = arr[s];

// count elements smaller than pivot 
int count =0;

for(int i =s+1 ; i<=e ;i++){
    if (arr[i] <= pivot)
    count ++;
}
int pivotIndex = s + count ; 
swap(arr[s], arr[pivotIndex]);
// now arr[pivotIndex] is correctly placed 

int i = s , j=e;
while(i < pivotIndex && j > pivotIndex){
    if(arr[i]> arr[pivotIndex] && arr[j]<= arr[pivotIndex])
    swap(arr[i++] , arr[j--]);
    else if(arr[i] < arr[pivotIndex]){
        i++;
    }
    else {
        j--;
    }
 }
return pivotIndex;
}

void quickSort(int arr[], int s , int e ){
    if(s>=e){
        return ; 
    }

    int partIndex = partition(arr, s ,e );
    cout<<"partIndex = "<< partIndex << endl;

    // call the function for the left part
    quickSort(arr ,s , partIndex-1);

    // call it for the right part 
    quickSort(arr , partIndex+1 , e);
    
}


int main(){
    int arr[5]={2,5,1,6,9};
    int n=5;
    quickSort(arr , 0 , 4);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}cout<<endl;

return 0;
}