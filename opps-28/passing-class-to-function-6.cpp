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
    int getalive(){
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
    void setalive(int alive){
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
int main(){
    player harsh;
    player raghav;
    harsh.setage(21);
    harsh.setscore(100);
    harsh.sethealth(70);
    harsh.setalive(true);
    raghav.setage(22);
    raghav.setscore(20);
    raghav.sethealth(100);
    raghav.setalive(true);
    cout<<addscore(harsh,raghav)<<endl;
    player sanket=getmaxscoreplayer(harsh,raghav);
    cout<<sanket.getscore()<<endl;
    cout<<sanket.gethealth()<<endl;
}