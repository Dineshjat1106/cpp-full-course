#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<unordered_map<int,int>> graph;
int vertex;
void add_edge(int src,int dest,int weight,bool bidirec=true){
    graph[src][dest]=weight;
    if(bidirec){
        graph[dest][src]=weight;
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto el:graph[i]){
            cout<<"("<<el.first<<" "<<el.second<<")";
        }
        cout<<endl;
    }
}
int main(){
    int vertex;
    cin>>vertex;
    graph.resize(vertex,unordered_map<int,int>());
    int edge;
    cin>>edge;
    while(edge--){
        int s,d,weight;
        cin>>s>>d>>weight;
        add_edge(s,d,weight);
    }
    display();
}