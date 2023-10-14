// Ques - remove all occurences of substring 
// ip - daabcbaabcbc & part - abc (substring to be removed )
// da'abc'baabcbc -> daba'abc'bc -> dab'abc' -> dab
// therefore op - dab

#include<iostream>
using namespace std;


string removeOccurences(string s , string part){
    while(s.length()!=0 && s.find(part) < s.length()){

        s.erase(s.find(part),part.length());

    }
    return s;
}

int main(){
    string str, part;
    cout<<"Enter string: ";
    cin>>str;
    cout<<"Enter substring(part): ";
    cin>>part;
    cout<<"Output is : "<<removeOccurences(str,part)<<endl;
    return 0;

}
