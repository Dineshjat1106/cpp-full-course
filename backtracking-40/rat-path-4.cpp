#include<iostream>
#include<vector>
using namespace std;
int ans;
bool canwego(int n,int i,int j,vector<vector<int>>& grid){
    return i>=0 && j>=0 && i<n && j<n && grid[i][j]==0;
}
void f(vector<vector<int>>& grid,int n,int i,int j){
    if(i==n-1 && j==n-1){
        ans=ans+1;
        return; 
    }
    grid[i][j]=2;
    if(canwego(n,i,j-1,grid)) f(grid,n,i,j-1);
    if(canwego(n,i-1,j,grid)) f(grid,n,i-1,j);
    if(canwego(n,i,j+1,grid)) f(grid,n,i,j+1);
    if(canwego(n,i+1,j,grid)) f(grid,n,i+1,j);
    grid[i][j]=0;
}
int rat(vector<vector<int>>& grid,int n){
    ans=0;
    f(grid,n,0,0);
    return ans;
}
int main(){
    vector<vector<int>> grid={
      {0,0,1,0,0,1,0},
      {1,0,1,1,0,0,0},
      {0,0,0,0,1,0,1},
      {1,0,1,0,0,0,0},
      {1,0,1,1,0,1,0},
      {1,0,0,0,0,1,0},
      {1,1,1,1,0,0,0}  
    };
    cout<<rat(grid,7);
}