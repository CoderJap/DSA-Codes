// Ques - A phrase is a palindrome if, after converting all uppercase letters into
// lowercase letters and removing all non-alphanumeric characters, it reads the  
// same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.

//Approach:  -> faltu character hatane hai
//           -> sab lowercase ho
//           -> fir palindrome check kro


#include<iostream>
using namespace std;

bool validChar(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

char toLowerCase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9') ){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }

}
bool checkPalindrome(string a){
    int s=0;
    int e=a.length()-1;

    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s){

    // faltu character hatado
    string temp="";

    for(int i=0;i<s.length();i++){
        if(validChar(s[i])){
            temp.push_back(s[i]);
        }
    }

    //lowercase me kardo 
    for(int j=0;j<temp.length();j++){
        temp[j]=toLowerCase(temp[j]);
    }

    return checkPalindrome(temp);
}

int main(){
    string s;
    getline(cin,s); //to input sentence
    cout<< isPalindrome(s) << endl;

}
