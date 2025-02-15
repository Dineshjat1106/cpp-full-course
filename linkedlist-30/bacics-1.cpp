#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
};
int main(){
    node a;
    a.val=10;
    node b;
    b.val=20;
    node c;
    c.val=30;
    node d;
    d.val=40;
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;
    cout<<a.val<<endl;
    cout<<a.next;
}