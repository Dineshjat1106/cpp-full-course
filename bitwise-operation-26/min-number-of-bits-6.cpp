#include<iostream>
using namespace std;
int main(){
    int x=3;
    int y=31;
    cout<<__builtin_popcount(x^y);
}