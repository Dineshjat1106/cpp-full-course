#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<list<pair<int,int>>> graph;
int vertex;
void add_edge(int src,int dest,int weight,bool bidirec=true){
    graph[src].push_back({dest,weight});
    if(bidirec){
        graph[dest].push_back({src,weight});
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
    graph.resize(vertex,list<pair<int,int>>());
    int edge;
    cin>>edge;
    while(edge--){
        int s,d,weight;
        cin>>s>>d>>weight;
        add_edge(s,d,weight);
    }
    display();
}