#include<iostream>
using namespace std;
class player{
    private:
        int health;
        int age;
        int score;
        bool alive;
    public:
        int gethealth(){
            return health;
        }
        int getage(){
            return age;
        }
        int getscore(){
            return score;
        }
        bool getalive(){
            return alive;
        }
        void sethealth(int health){
            this->health=health;
        }
        void setage(int age){
            this->age=age;
        }
        void setscore(int score){
            this->score=score;
        }
        void setalive(bool alive){  
            this->alive=alive;
        }
};
int addscore(player a,player b){
    return a.getscore()+b.getscore();
}
player getmaxscoreplayer(player a,player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
}
int main() {
    player harsh;
    player raghav;
    player *urvi = new player;
    harsh.setage(21);
    harsh.setscore(100);
    harsh.sethealth(70);
    harsh.setalive(true);
    raghav.setage(22);
    raghav.setscore(20);
    raghav.sethealth(100);
    raghav.setalive(true);
    urvi->setscore(40);
    urvi->setage(25); 
    urvi->sethealth(60);
    urvi->setalive(true);
    cout<<"Urvi's score: "<<urvi->getscore()<<endl;
    cout<<"Combined score of Harsh and Raghav: "<<addscore(harsh,raghav)<<endl;
    player maxScorePlayer=getmaxscoreplayer(harsh,raghav);
    cout<<"Max score: "<<maxScorePlayer.getscore()<<endl;
    cout<<"Max score player's health: "<<maxScorePlayer.gethealth()<<endl;
    delete urvi;
    return 0;
}