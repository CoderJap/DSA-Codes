// Ques - You have given a str of words . you need to 
// replace all the spaces between words with @40
// ip - hello world 7
// op - hello@40world@407

#include <iostream>
using namespace std;

string replaceSpaces(string &str){
    string temp = "";

    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else {
            temp.push_back(str[i]);
        }

    }
    return temp;
}

int main(){
    string str;
    getline(cin,str);

    cout<<replaceSpaces(str)<<endl;
    return 0;
}

// current complexities :-
// Time complexity - o(n)
// Space complexity - o(n)

// todo:-
// hw - extra string nhi bnanae joh bhi krna hai 
// voh isse string me kro and que sko solve kro