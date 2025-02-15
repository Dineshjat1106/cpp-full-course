#include<iostream>
using namespace std;
class calculator{
    public:
    int a;
    int b;
    void add(){
        cout<<a+b;
    }
    void sub(){
        cout<<a-b;
    }
};
int main(){
    calculator calci;
    calci.a=10;
    calci.b=7;
    calci.add();
    cout<<endl;
    calci.sub();
}