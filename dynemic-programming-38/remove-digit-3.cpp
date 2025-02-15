#include<iostream>
#include<vector>
using namespace std;
vector<int> getdigit(int n){
    vector<int> res;
    while(n>0){
        if(n%10!=0){
            res.push_back(n%10);
        }
        n=n/10;
    }
    return res;
}
int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    vector<int> d=getdigit(n);
    int result=INT16_MAX;
    for(int i=0;i<d.size();i++){
        result=min(result,f(n-d[i]));
    }
    return 1+result;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}