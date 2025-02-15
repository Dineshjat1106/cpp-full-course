#include<iostream>
#define ll long long int
#include<vector>
#include<algorithm>
using namespace std;
int find(vector<int>& parent,int a){
    return parent[a]=((parent[a]==a) ? a : find(parent,parent[a]));
}
void Union(vector<int>& par,vector<int>&rank,int a,int b){
    a=find(par,a);
    b=find(par,b);
    if(a==b) return;
    if(rank[a]>=rank[b]){
        rank[a]++;
        par[b]=a;
    }
    else{
        rank[b]++;
        par[a]=b;
    }
}
struct edge{
    int src;
    int dest;
    int wt;
};
bool cmp(edge e1,edge e2){
    return e1.wt<e2.wt;
}
ll kruskals(vector<edge>& input,int n,int e){
    sort(input.begin(),input.end(),cmp);
    vector<int> parent(n+1);
    vector<int> rank(n+1,1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    int edgecount=0;
    int i=0;
    int ans=0;
    while(edgecount<n-1 && i<input.size()){
        edge curr=input[i];
        int srcpar=find(parent,curr.src);
        int destpar=find(parent,curr.dest);
        if(srcpar!=destpar){
            Union(parent,rank,srcpar,destpar);
            ans=ans+curr.wt;
            edgecount++;
        }
        i++;
    }
    return ans;
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<edge> v(e);
    for(int i=0;i<e;i++){
        cin>>v[i].src>>v[i].dest>>v[i].wt;
    }
    cout<<kruskals(v,n,e)<<endl;
}