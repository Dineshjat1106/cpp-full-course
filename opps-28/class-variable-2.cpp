#include<iostream>
using namespace std;
class player{
    public:
    int score;
    int health;
    void showhealth(){
        cout<<"health is "<<health;
    }
};
int main(){
    int score[100]={};
    int health[100]={};
    player amit;
    amit.score=90;
    amit.health=100;
    amit.showhealth();
}