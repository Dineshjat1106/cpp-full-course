#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;
vector<list<int>> graph;
int v;
void addedge(int a,int b,bool bidir=true){
    graph[a].push_back(b);
    if(bidir){
        graph[b].push_back(a);
    }
}
void topodfs(){
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto neighbor:graph[i]){
            indegree[neighbor]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            qu.push(i);
            vis.insert(i);
        }
    }
    while(not qu.empty()){
        int node=qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbor:graph[node]){
            if(not vis.count(neighbor)){
                indegree[neighbor]--;
                if(indegree[neighbor]==0){
                    qu.push(neighbor);
                    vis.insert(neighbor);
                }
            }
        }
    }
}
int main(){
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v,list<int> ());
    while(e--){
        int x,y;
        cin>>x>>y;
        addedge(x,y,false);
    }
    topodfs();
}