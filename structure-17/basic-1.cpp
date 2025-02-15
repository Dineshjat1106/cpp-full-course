#include<iostream>
using namespace std;
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
    struct pokemon chari;
    chari.attack=70;
    chari.hp=80;
    chari.speed=140;
    chari.tier='B';
    cout<<pikachu.hp<<" "<<chari.speed;
}