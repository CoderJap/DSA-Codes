#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;

int main(){

    // creation 
    unordered_map<string,int> m;

    // insertion

    //1
    pair<string,int> p = make_pair("japjot",7);
    m.insert(p);

    //2
    pair<string,int> pair2("Coder",1);
    m.insert(pair2);

    //3
    m["japjot"] = 2;

    // what will happen in this case 
    m["japjot"] = 5;

    // Search 
    cout<< m["japjot"] << endl;
    cout << m.at("Coder") << endl;

     

     cout << m["unknownKey"] << endl; // iss line ke karen ek entry bn jayegi unknownKey ki with value 0
     cout<<m.at("unknownKey") << endl;

     // size 
     cout << m.size() << endl;

    // to check if present or not 
    // use count fnc if present it returns 1 otherwise 0 when not present 
    cout << m.count("Code") << endl;

    // erase 
    m.erase("unknownKey");
    cout << m.size() << endl;

    // Traversing 
    /*
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    */

   unordered_map<string,int> :: iterator it = m.begin();

   while(it != m.end()){
    cout << it->first <<" " << it->second << endl;
    it++;
   }


    return 0;




    

}