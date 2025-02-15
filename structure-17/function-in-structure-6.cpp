#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
}pokemon;
void fun(pokemon p){
    cout<<p.hp;
    return;
}
int main(){
pokemon pikachu;
pikachu.hp=60;
fun(pikachu);
}