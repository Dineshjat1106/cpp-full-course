#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int a=0;
   for(int i=2;i<=n-1;i++){
    if(n%i==0){
        a=1;
        break;
    }
   }
   if(n==1) cout<<"1 is neither prime nor composit";
   else if(a==0) cout<<"number is prime";
   else cout<<"number is composit";
}