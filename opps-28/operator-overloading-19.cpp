#include<iostream>
using namespace std;
class a{
    public:
    int age;
};
int main(){
    a a1,a2;
    a1.age=10;
    a2.age=20;
    a a3;
    a3.age=a1.age+a2.age;
    cout<<a3.age<<endl;
}