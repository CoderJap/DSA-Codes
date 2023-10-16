// binary search prblm on 2d arrays level 2 
// matrix has foll prop :- 
// -> integers in each row are sorted in ascending order from left to right 
// -> integers in each column are sorted in ascending from top to bottom 


#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix ( vector <vector <int>> & matrix , int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col -1 ;

    while(rowIndex < row && colIndex >=0 ){
        int element = matrix [rowIndex][colIndex];
        if(element == target){
            return 1;

        }
        if(element < target){
            rowIndex++;
        }
        else{
            colIndex --;
            }
    }
    return 0;
}

int main(){

    vector<vector<int>> matrix ={{1,3,5,7} , {10,11,16,20} , {23,30,34,60}};
    int target = 163;
    cout<< searchMatrix(matrix , target)<<endl;
    return 0;
}

