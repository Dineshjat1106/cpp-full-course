#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool pailindrom(string s,int i,int j){
    if(i>j) return true;
    else if(s[i]!=s[j]) return false;
    else return pailindrom(s,i+1,j-1);
}
int main(){
    string s="mom";
    cout<<pailindrom(s,0,s.length()-1);
}