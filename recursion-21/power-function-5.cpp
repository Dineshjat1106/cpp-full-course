#include<iostream>
using namespace std;
int power(int a,int b){
    int x=1;
    for(int i=1;i<=b;i++){
        x=x*a;
    }
    return x;
}
int main(){
    int a,b;
    cin>>a>>b;
    int p=power(a,b);
    cout<<p;
}