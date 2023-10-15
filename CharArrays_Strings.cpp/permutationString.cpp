// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2.

 

// Example 1:

// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true
// Explanation: s2 contains one permutation of s1 ("ba").
// Example 2:

// Input: s1 = "ab", s2 = "eidboaoo"
// Output: false

//Approach: s1 -> char ka count store kralenge -> arr[26];
// s2 -> traverse in a window of length of s1.length() &
// then comparison kro using arr[26] then we will get to know true or false 
 
 #include <iostream> 
 using namespace std;


bool checkEqual(int a[26] , int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i])
        return 0;
    }
    return 1;
}

 bool checkInclusion(string s1 , string s2){

    // charcter count array 
    int count1[26] = {0};

    for(int i=0;i<s1.length(); i++){
        int index = s1[i] - 'a'; //char ka index mil jayega 
        count1[index]++;    // uska count badha denge
    }

    // traverse s2 string in window of size s1 length and compare 

    int i=0;
    int windowSize= s1.length();
    int count2[26] = {0};

    // running for first window 
    while(i< windowSize && i<s2.length()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if(checkEqual(count1 , count2 ))
    return 1;

    // aage window process karo 
    // naya char ka count ++ krayenge and joh 
    // element nikalega uska count -- krdenge 

    while(i<s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if(checkEqual(count1 , count2))
        return 1;
    }
    return 0;
 }


 int main(){
    string s2 , s1;
    getline(cin,s2);
    getline(cin,s1);
    cout<< checkInclusion(s1,s2)<<endl;

 }








