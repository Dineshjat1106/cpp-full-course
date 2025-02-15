#include<iostream>
using namespace std;
class bike{
    public:
    int tyre;
    int engine;
    bike(int tyre,int engine){
        this->tyre=tyre;
        this->engine=engine;
    }
    ~bike(){
        cout<<"Destructor called"<<endl;
    }
};
int main() {
    bike tvs(12,100);
    bike honda(13,150);
    bike royal(14,200); 
    bool flag=true; 
    if (flag==true){
        bike bmw(17,300);
        cout<<"BMW tyre: "<<bmw.tyre<<", BMW engine: "<<bmw.engine<<endl;
    }
    cout<<"TVS tyre: "<< tvs.tyre<<", TVS engine: "<<tvs.engine<<endl;
    cout<<"Honda tyre: "<<honda.tyre<<", Honda engine: "<<honda.engine<<endl;
    cout<<"Royal tyre: "<<royal.tyre<<", Royal engine: "<<royal.engine<<endl;
    return 0;
}