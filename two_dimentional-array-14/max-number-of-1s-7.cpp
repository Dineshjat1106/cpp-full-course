#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={1,0,1,1,0,1,0,1,1,0,0,1};
    int r=3;
    int c=4;
    int maxcount=0;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
           if(arr[i][j]==1) count++;
        }
        if(maxcount<count) maxcount=count;
    }
    cout<<maxcount;
}