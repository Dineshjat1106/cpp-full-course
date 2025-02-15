#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <unordered_set>
#include <climits> 
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
int vertex;
void add_edge(int src,int dest,bool bidirec=true){
    graph[src].push_back(dest);
    if (bidirec){
        graph[dest].push_back(src);
    }
}
void bfs(int src,vector<int>& dist){
    queue<int> qu;
    visited.clear();
    dist.resize(vertex,INT_MAX);
    dist[src]=0;
    visited.insert(src);
    qu.push(src);
    while(!qu.empty()){
        int curr=qu.front();
        qu.pop();
        for(auto neighbour:graph[curr]){
            if(!visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=dist[curr]+1;
            }
        }
    }
}
int main() {
    cin>>vertex;
    graph.resize(vertex,list<int>());
    int edge;
    cin>>edge;
    while(edge--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    vector<int> dist;
    bfs(x,dist);
    for(int i=0;i<dist.size();i++){
        if(dist[i]==INT_MAX) cout<<"-1 ";
        else cout<<dist[i]<<" ";
    }
    return 0;
}
