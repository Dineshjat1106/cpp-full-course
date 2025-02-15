#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int q=a/b;
    int remainder1=a-(b*q);
    int remainder2=a%b;
    cout<<remainder1<<endl<<remainder2;
}