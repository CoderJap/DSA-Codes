// Ques - matrix has foll. prop :- 
//  -> Integers in each row are sorted from left - right 
//  -> The first integer of each row is greater than the last integer of the previous row . 

// Cases :- 
// 1) arr[mid]==target -> found -> return
// 2) arr[mid] < target -> s=mid=1
// 3) arr[mid] > target -> e=mid-1

// now in 2d array , to get the element we need row & column to get them :-
// to get row -> mid/col
// to get col -> mid%col


#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector <vector<int>> &matrix , int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int start =0;
    int end = row*col-1;

    int mid = start + (end-start)/2;
    while(start<=end){
        int element = matrix[mid/col][mid%col];
        if(element == target){
            return 1;
        }
        if(element < target){
            start = mid -1;

        }
        else{
            end =mid-1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
}

int main(){

    vector<vector<int>> matrix ={{1,3,5,7} , {10,11,16,20} , {23,30,34,60}};
    int target = 16;
    cout<< binarySearch(matrix , target)<<endl;
    return 0;
}

