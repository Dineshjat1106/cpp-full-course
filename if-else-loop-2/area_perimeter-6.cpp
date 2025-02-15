#include<iostream>
using namespace std;
int main(){
    int l,b;
    cin>>l>>b;
    int area=b*l;
    int perimeter=2*(l+b);
    cout<<"area is "<<area<<endl;
    cout<<"perimeter is "<<perimeter<<endl;
    if(area>perimeter) cout<<"area is greater";
    else if(perimeter>area) cout<<"perimeter is greater";
    else cout<<"both are equal";
}