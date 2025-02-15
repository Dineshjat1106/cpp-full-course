#include<iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main(){
    string str="I Love You";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}