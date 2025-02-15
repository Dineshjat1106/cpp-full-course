#include<iostream>
using namespace std;
    class player{
        public:
        int score;
        int health;
    };
    int main(){
        player amit;
        amit.score=90;
        amit.health=100;
        player dinesh;
        dinesh.score=80;
        dinesh.health=90;
        cout<<amit.score<<endl<<dinesh.score<<endl<<amit.health<<endl<<dinesh.health;
}