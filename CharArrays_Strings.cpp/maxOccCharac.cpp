// Ques - Given a string str task is to find the maximum 
// occuring character in the string str . If more than one 
// character occurs the maximum number of time then 
// print the resp. character 

// Approach - ek array bnalo jisme phele sab ka count 0 voh arrays ke indices basically char ko bta rhe hai 
// fir joh string aaye uske chars ko numbers mei convert krke array 
// ke corresponding number ka count plus plus krdo fir uske baad
// mazimum index store krlo and then usme plus 'a' krke humme 
// char mil jayega of highest freq 

#include <iostream>
using namespace std;

char getMaxChar(string s ){
    int arr[26]={0};
    // create an array of count of chars 
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        // lowercase 
        int number =0;
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }
        else{ // Uppercase 
        number = ch -'A';
        }
        arr[number]++;
    }

    // find maximum occ char
    int maxi=-1 , ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans =i;
            maxi=arr[i];
        }
    }

    char finalAns = 'a'+ ans;
    return finalAns;
}

int main(){
    string s;
    cin>>s;
    
    cout<<getMaxChar(s)<<endl;
    return 0;


}

