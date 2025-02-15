#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int a){
    cout<<10+a<<endl;
}
int main(){
    add(1,2);  
    add(5);     
}