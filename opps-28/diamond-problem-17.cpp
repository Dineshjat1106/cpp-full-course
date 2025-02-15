#include<iostream>
using namespace std;
class a{
public:
    int a_ka_public;
    a(){
        cout<<"a ka constructor"<<endl;  
    }
};
class b:virtual public a{
public:
    int b_ka_public;
    b(){
        cout<<"b ka constructor"<<endl;
    }
};
class c:virtual public a{
public:
    int c_ka_public;
    c(){
        cout<<"c ka constructor"<<endl;
    }
};
class d:public b,public c{
public:
    int d_ka_public;
    void show(){
        cout<<a_ka_public<<endl;
    }
};
int main(){
    d obj; 
    obj.a_ka_public=10;  
    obj.show();  
}