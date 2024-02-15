#include <iostream> 
#include <algorithm> 
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size = 0;
    }

    void insert(int val){
       size +=1;
       int index = size;
       arr[index] = val;

       while(index > 1){

        int parent = index/2;

        if(arr[parent] < arr[index]){
            swap(arr[parent],arr[index]);
            parent = index;
        }
        else {
            return ;
             }
        }
    }

    void deleteHeapNode(){

        if(size == 0)
        return ;

        // step 1-> swap first and last nodes 
        arr[1] = arr[size];

        // step 2-> remove the last node 
        size--;

        // step 3-> propagate the node to its correct position 
        int i=1;
        while(i<size){
            int rightIndex = 2 * i;
            int leftIndex = 2 * i + 1;

            if(leftIndex < size && arr[leftIndex] > arr[i]){
                swap(arr[leftIndex],arr[i]);
                i = leftIndex;
            }

            else if(rightIndex < size && arr[rightIndex] > arr[i] ){
                swap(arr[rightIndex],arr[i]);
                i = rightIndex;
            }

            else {
                return ;
            }
        }
    }

    void heapify(int arr[],int n , int i){

        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }

        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest!=i){
            swap(arr[largest] , arr[i]);
            heapify(arr,n,largest);
        }   
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout << arr[i] << " ";
        } cout << endl;
    } 
};


int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    h.deleteHeapNode();

    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2 ; i>0; i++){
        cout << arr[i] <<" ";
    }

    cout <<" ---- Printing the array now ----" << endl;

    for(int i=1;i<=n;i++){
        cout<< arr[i] <<" "; 
    } cout << endl;

    return 0;
}