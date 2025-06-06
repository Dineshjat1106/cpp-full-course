#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> result;
void add_edge(int src,int dest,bool bidirec=true){
    graph[src].push_back(dest);
    if(bidirec){
        graph[dest].push_back(src);
    }
}
void dfs(int curr,int end,vector<int>& path){
    if(curr==end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void allpath(int src,int dest){
    vector<int> v;
    dfs(src,dest,v);
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
    allpath(x,y);
    for(auto path:result){
        for(auto el:path){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}