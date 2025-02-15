#include<iostream>
#include<string.h>
using namespace std;
void remove(string ans,string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch=original[0];
    if(ch=='h') remove(ans,original.substr(1));
    else remove(ans+ch,original.substr(1));
}
int main(){
    string str="physics wallah";
    remove(" ",str);
}