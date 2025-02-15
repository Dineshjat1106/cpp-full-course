#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }date;
    date a,b;
    a.date=5;
    a.month=12;
    a.year=1999;
    b.date=19;
    b.month=1;
    b.year=2023;
    bool flag=true;
    if(a.date!=b.date) flag=false;
    else if(a.month!=b.month) flag=false;
    else if(a.year!=b.year) flag=false;
    if(flag==true) cout<<"the dates are same";
    else cout<<"the dates are not same";
}