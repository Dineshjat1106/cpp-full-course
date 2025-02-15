#include<iostream>
#include<string.h>
using namespace std;
int main(){
    typedef struct book{
        char name[50];
        int nop;
        float price;
    }book;
    book a;
    book b;
    book c;
    a.price=411.5;
    a.nop=100;
    b.price=200.4;
    b.nop=200;
    c.price=345.56;
    c.nop=312;
    cout<<b.price<<" "<<a.nop<<" "<<c.price;
}