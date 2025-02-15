#include<iostream>
using namespace std;
class bike{
    public:
    int tyre;
    int engine;
    bike(int tyre,int engine=200){
        this->tyre=tyre;
        this->engine=engine;   
    }
};
int main(){
    bike royal(15,350); 
    bike bajaj(13);  
    cout<<royal.tyre<<" "<<royal.engine<<endl;
    cout<<bajaj.tyre<<" "<<bajaj.engine<<endl;
}