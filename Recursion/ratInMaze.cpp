/*Leetcode star problem
 GIVEN :- Start-> 1 0 0 0          where: 1 - we can come to this cell 
                  1 1 0 0                 0 - we cannot come to this cell 
                  1 1 0 0 
                  0 1 1 1  <-End 

Aim is to output all possible ways to reach the end (n-1 , n-1) from the start (0,0) . the rat in all the 4 directions up , down , left and right.

Approach - At any point , we have 4 choices : up , down , left or right 
For each position , check if you can go U/D/L/R keeping in mind the following constraints :
1.Dont go out of bounds 
2.Dont go to an already visited position 
3.Dont go to a position marked 0 

For point 2 , maintain a 2D array 'visited' which keeps track of all the visited positions (n*n size)
Once you reach (n-1 , n-1) , you can print the string showing the path you took and then make all cells of the visited matrix as false 

Thus , when you move , you will make visited [i][j] (if you moved to m[i][j])
and you will append your string with D , U , L , R according to you movement */
// To chcek if a position is legit , we discussed some condition above 

#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x , int y , int n , vector<vector<int>>){
    
}