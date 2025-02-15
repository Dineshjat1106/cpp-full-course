#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;
   int m1=(y2-y1)/(x2-x1);
   int m2=(y3-y2)/(x3-x2);
   if(m1==m2) cout<<"all points on a line";
   else cout<<"points are not on line";
}