#include<iostream>
using namespace std;
class bike{
    public:
    int tyresize;
    bike(int tyresize){
        this->tyresize=tyresize;
        cout<<"const call hua"<<endl;
    }
};
int main(){
    bike tvs(12);
    bike honda(16);
    bike royal(18);
    cout<<tvs.tyresize<<endl;
    cout<<honda.tyresize<<endl;
    cout<<royal.tyresize<<endl;
}