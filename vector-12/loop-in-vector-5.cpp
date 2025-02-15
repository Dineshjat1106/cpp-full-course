#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x=6;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x) idx=i;
    }
    cout<<idx;
}