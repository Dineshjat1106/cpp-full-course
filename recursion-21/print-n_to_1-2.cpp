#include<iostream>
using namespace std;
void decresing(int n){
    if(n==0) return;
    cout<<n<<endl;
    decresing(n-1);
}
int main(){
    int n;
    cin>>n;
    decresing(n);
    cout<<n;
}