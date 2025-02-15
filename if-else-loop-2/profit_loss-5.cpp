#include<iostream>
using namespace std;
int main(){
  int cp,sp;
  cin>>cp>>sp;
  if(sp>cp) cout<<"profit\n"<<sp-cp;
else if(sp<cp) cout<<"loss\n"<<sp-cp;
else cout<<"no loss no profit\n"<<cp-sp;
}