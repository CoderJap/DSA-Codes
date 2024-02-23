#include <iostream>
#include <map>
#include<unordered_map>
using namespace std;

int main(){

    // creation 
    unordered_map<string,int> m;

    // insertion

    //1
    pair<string,int> p = make_pair("demo",7);
    m.insert(p);

    //2
    pair<string,int> pair2("dummy",1);
    m.insert(pair2);

    //3
    m["Misc"] = 2;

    // what will happen in this case 
    m["Misc"] = 5;

    // Search 
    cout<< m["demo"] << endl;
    cout << m.at("dummy") << endl;

     

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

   // unordered map pe random order mei print honge like jisme voh bne honge 
   // map mei voh value ke hisab se ordered way mei print honge 


    return 0;




    

}