// ques - joh bhi k ki value hogi utne places se har element kon shift krdena hai cyclic way mei 

// note :- %n -> ans belongs to [0 , (n-1)]
// (n+2)%n = 2 
// so , arr[(i+k)%n] = arr[i] -> cyclic way mei k position se shift krdeya (ith term ko)



#include <iostream>
#include <vector>
using namespace std;

void rotate(vector <int> &nums , int k){
    vector <int> temp(nums.size());
    for(int i=0;i<nums.size(); i++){
        temp[(i+k)%nums.size()]=nums[i];
    }

    //copy temp into nums vector 
    nums = temp;
    
    // why we made a temp vector & uske andar formula lgwaya -> if seedha nums pe formula lgate toh voh overwrite krdega array.
}

int main(){
    vector <int> nums ={1,2,3,4};
    int k =2;
    rotate(nums , k);
    for(int i : nums){
        cout<<i<<" ";
    }cout<<endl;

    return 0;

}

