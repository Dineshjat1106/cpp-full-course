#include<iostream>
#include<string>
using namespace std;
string decimal(int num){
    string result=" ";
    while(num>0){
        if(num%2==0) result="0"+result;
        else result="1"+result;
        num=num/2;
    }
    return result;
}
int main(){
    cout<<decimal(13);
}