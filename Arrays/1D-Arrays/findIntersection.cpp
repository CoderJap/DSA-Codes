//Ques-Given two integer arrays nums1 and nums2, return an array of their intersection. **Each element in the result must be unique**(this statement 
//in code needs to be fixed) and you may return the result in any order.


//Approach-Maintain two trackers i and j for the first  and second array resp.\
//At any point of time if :
//     1.arr[i]<arr[j]-> increment i
//     2.arr[i]>arr[j]-> increment j
//     3.arr[i]==arr[j]-> include in answer and increment both i and j

#include<iostream>
#include<vector>
using namespace std;

vector<int> Intersec(vector<int>&arr1, vector<int> &arr2 ){
    vector<int> ans;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int>arr1 = {1,2,2,1};
    vector<int>arr2 = {2,2};
    vector<int> ans=Intersec(arr1,arr2);
    for (auto i = ans.begin(); i != ans.end(); ++i)
        {cout<< *i << " ";}

}