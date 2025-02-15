#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
void add_edge(int src,int dest,bool bidirec=true){
    graph[src].push_back(dest);
    if(bidirec){
        graph[dest].push_back(src);
    }
}
bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr);
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            bool result=dfs(neighbour,end);
            if(result) return true;
        }
    }
    return false;
}
bool path(int src,int dest){
    return dfs(src,dest);
}
int main(){
    int vertex;
    cin>>vertex;
    graph.resize(vertex,list<int>());
    int edge;
    cin>>edge;
    visited.clear();
    while(edge--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    cout<<path(x,y)<<endl;
}