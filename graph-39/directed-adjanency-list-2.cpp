#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<list<int>> graph;
int vertex;
void add_edge(int src,int dest,bool bidirec=true){
    graph[src].push_back(dest);
    if(bidirec){
        graph[dest].push_back(src);
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto el:graph[i]){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int vertex;
    cin>>vertex;
    graph.resize(vertex,list<int>());
    int edge;
    cin>>edge;
    while(edge--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }
    display();
}