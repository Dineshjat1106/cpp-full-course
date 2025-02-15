#include<iostream>
using namespace std;
int sumof(int n){
    if(n==1 || n==0) return 1;
    int ans=n+sumof(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int sum=sumof(n);
    cout<<sum;
}