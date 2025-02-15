#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int>p1;
    p1.first="dinesh";
    p1.second=26;

    pair<string,int>p2;
    p2.first="ritesh";
    p2.second=57;

    pair<string,int>p3;
    p3.first="manmohan";
    p3.second=41;

    m["harsh"]=15;
    m["manisha"]=45;
    m.erase("harsh");

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    for(auto p:m){ //pair<string,int> replace by auto
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    cout<<m["dineh"];
}