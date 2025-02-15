#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n=5;
    int arr[n]={4,2,5,1,3};
    vector<int> v(n,0);
    int x=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int minx=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(min>arr[j]){
                    min=arr[j];
                    minx=j;
                }
            }
        }
        arr[minx]=x;
        v[minx]=1;
        x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}