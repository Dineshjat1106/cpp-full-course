#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
bool cmp(int x,int y){
    return x>y;
}
ll mincost(int n,int m,vector<ll>& ver,vector<ll>& hor){
    sort(ver.begin(),ver.end(),cmp);
    sort(hor.begin(),hor.end(),cmp);
    int hz=1,vr=1;
    int h=0,v=0;
    ll ans=0;
    while(h<hor.size() and v<ver.size()){
        if(ver[v]>hor[h]){
            ans=ans+ver[v]*vr;
            hz++;
            v++;
        }
        else{
            ans=ans+hor[h]*hz;
            vr++;
            h++;
        }
    }
    while(h<hor.size()){
        ans=ans+hor[h]*hz;
        vr++;
        h++;
    }
    while(v<ver.size()){
        ans=ans+ver[v]*vr;
        hz++;
        v++;
    }
    return ans;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<ll> hor,ver;
    for(int i=0;i<m-1;i++){
        int x;
        cin>>x;
        ver.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        int y;
        cin>>y;
        hor.push_back(y);
    }
    cout<<mincost(n,m,hor,ver);
}