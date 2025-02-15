#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,7);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}