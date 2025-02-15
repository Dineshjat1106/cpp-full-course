#include<iostream>
#include<string.h>
using namespace std;
int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;
    pokemon arr[3];
    arr[0].attack=50;
    arr[0].speed=100;
    arr[0].hp=30;
    arr[0].tier='A';
    strcpy(arr[0].name,"chari");
    arr[1].attack=150;
    arr[1].speed=100;
    arr[1].hp=130;
    arr[1].tier='B';
    strcpy(arr[1].name,"pikachu");
    arr[2].attack=50;
    arr[2].speed=100;
    arr[2].hp=30;
    arr[2].tier='C';
    strcpy(arr[2].name,"metwo");
    for(int i=0;i<3;i++){
        cout<<arr[i].name<<endl;
        cout<<arr[i].attack<<endl;
        cout<<arr[i].hp<<endl;
        cout<<arr[i].speed<<endl;
        cout<<arr[i].tier<<endl;
    }
}