#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int iej=combination(i,j);
            cout<<iej<<" ";
        }
        cout<<endl;
    }
}