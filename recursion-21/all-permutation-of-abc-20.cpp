#include<iostream>
#include<string>
using namespace std;
void perm(string ans,string original) {
    if(original.empty()){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];                        
        string left=original.substr(0,i);            
        string right=original.substr(i+1);      
        perm(ans+ch,left+right);                 
    }
}
int main(){
    string str="abc";
    perm("",str);   
    return 0;
}