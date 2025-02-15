#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=n;
    int nsp=1;
    for(int i=1;i<=(2*n)+1;i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int j=1;j<=n;j++){
        for(int k=1;k<=nst;k++){
          cout<<"* "; 
        }
        for(int l=1;l<=nsp;l++){
            cout<<"  ";
        }
        for(int m=1;m<=nst;m++){
            cout<<"* ";
        }
        nst--;
        nsp=nsp+2;
        cout<<endl;
    }
}