#include<iostream>
using namespace std;
class cricket{
    public:
    char name;
    int age;
    int notm;
    int avgscore;
};
int main(){
    cricket virat;
    virat.name='v';
    virat.age=30;
    virat.notm=34;
    virat.avgscore=80;
    cricket dhoni;
    dhoni.name='d';
    dhoni.age=34;
    dhoni.notm=40;
    dhoni.avgscore=90;
    cricket cricket[2]={virat,dhoni};
    for(int i=0;i<2;i++){
        cout<<cricket[i].name<<endl;
        cout<<cricket[i].age<<endl;
        cout<<cricket[i].notm<<endl;
        cout<<cricket[i].avgscore<<endl;
    }
}