#include<iostream>
#include<string>
using namespace std;
class vech{
    public:
    int tyre;
    int engine;
    int light;
    string company;
};
class car: public vech{
    public:
    int stering;
};
class bike: public vech{
    public:
    int handlesize;
};
int main(){
    bike honda;
    car bmw;
    honda.handlesize=5;
    honda.tyre=10;
    bmw.tyre=40;
    bmw.stering=100;
    cout<<honda.handlesize<<" "<<honda.tyre<<endl;
    cout<<bmw.tyre<<" "<<bmw.stering<<endl;
}