#include<iostream>
#include<vector>
using namespace std;
void change(int a[]){
    a[0]=9;
}
int main(){
int a[3]={1,2,3};
cout<<a[0]<<endl;
change(a);
cout<<a[0];
}