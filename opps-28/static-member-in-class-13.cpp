#include<iostream>
using namespace std;
class bike{
    public:
        static int nob; 
        int tyre;
        int engine;
        bike(int tyre,int engine=200){
            this->tyre=tyre;
            this->engine=engine;
        }
};
int bike::nob=10;
int main(){
    bike royal(15,350); 
    bike bajaj(13);  
    cout<<"Number of bikes: "<<bike::nob << endl;
    cout<<"Royal nob: "<<royal.nob<<endl;
    cout<<"Bajaj nob: "<<bajaj.nob<<endl;
    return 0;
}