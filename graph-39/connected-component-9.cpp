#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;
vector<list<int>> graph;
int vertex;
void add_edge(int src,int dest,bool bidirec=true){
    graph[src].push_back(dest);
    if (bidirec){
        graph[dest].push_back(src);
    }
}
void dfs(int node,unordered_set<int>& visited){
    visited.insert(node);
    for(auto neighbor:graph[node]){
        if(!visited.count(neighbor)){
            dfs(neighbor,visited);
        }
    }
}
int connect_component(){
    int result=0;
    unordered_set<int> visited;
    for(int i=0;i<vertex;i++){
        if(visited.count(i)==0){
            result++;
            dfs(i,visited);
        }
    }
    return result;
}
int main(){
    cin>>vertex; 
    graph.resize(vertex,list<int>());
    int edge;
    cin>>edge;
    while(edge--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }
    cout<<connect_component()<<endl;
    return 0;
}