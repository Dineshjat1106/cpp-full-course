#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
string s="A,Z,Y,Z,X,B,Y,D,X,J,K";
string a=" ";
for(int i=0;i<s.length();i++){
    if(s[i]>='X'){
        a.push_back(a[i]);
    }
}
sort(a.begin(),a.end());
cout<<a<<" ";
}