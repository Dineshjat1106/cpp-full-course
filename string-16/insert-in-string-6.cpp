#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[8]="college";
    for(int i=6;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='k';
    cout<<str<<endl;
}