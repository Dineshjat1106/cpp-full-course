#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j<=nsp;j++){
          cout<<"  "; 
        }
        nsp--;
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int l=1;l<=i-1;l++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
}