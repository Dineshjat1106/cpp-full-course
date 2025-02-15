#include<iostream>
using namespace std;
int countset(int n){
    return __builtin_popcount(n);
}
int main(){
    cout<<countset(13);
}