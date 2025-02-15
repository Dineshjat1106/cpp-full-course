#include<iostream>
using namespace std;
void england(){
    cout<<"you are in england\n";
    return;
}
void india(){
    cout<<"you are in india\n";
    england();
    return;
}
void america(){
    cout<<"you are in america\n";
    india();
    return;
}
int main(){
    america();
}