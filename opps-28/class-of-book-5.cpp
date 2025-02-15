#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int nop;
    int countbook(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool bookpresent(char book){
        if(name==book) return true;
        else return false;
    }
};
int main(){
    book harry;
    harry.name='h';
    harry.price=1000;
    harry.nop=500;
    cout<<harry.countbook(2000)<<endl;
    cout<<harry.bookpresent('h');
}