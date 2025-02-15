#include<iostream>
using namespace std;
class a{
    public:
    int a_ka_public;
    void show(){
        cout<<"mai a ka show hu"<<endl;
    }
};
class b:public a{
    public:
    int b_ka_public;
    void show(){
        cout<<"aham b asmi"<<endl;
    }
};
int main(){
    b obj;
    obj.show();
    obj.a::show();
}