#include<iostream>
using namespace std;
void incresing(int a,int b){
    if(a>b) return;
    cout<<a<<endl;
    incresing(a+1,b);
    return;
}                                                                   
int main(){
    int a,b;
    cin>>a>>b;
    incresing(a,b);
}