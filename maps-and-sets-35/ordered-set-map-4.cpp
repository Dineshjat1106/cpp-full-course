#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(1);
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
    map<int,int>m;
    m[3]=30;
    m[5]=50; 
    m[1]=10;
    m[4]=40;
    m[2]=20;
    for(auto x:m){
        cout<<x.first<<" ";
        cout<<x.second<<" ";
        cout<<endl;
    }
}