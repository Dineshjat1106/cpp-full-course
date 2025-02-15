#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>80) cout<<"A grade";
    else if(n>60 && n<=80) cout<<"B grade";
    else if(n>40 && n<=60) cout<<"C grade";
    else cout<<"D grade";  
}