#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1,vector<int>& arr2){
int n=arr1.size();
int m=arr2.size();
vector<int> res(m+n);
int i=0;
int j=0;
int k=0;
while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        res[k]=arr1[i];
        i++;
    }
    else{
        res[k]=arr2[j];
        j++;
    }
    k++;
}
if(i==n){
    while(j<=m-1){
        res[k]=arr2[j];
        k++;
        j++;
    }
}
if(j==m){
    while(i<=n-1){
        res[k]=arr1[i];
        k++;
        i++;
    }
}
return res;
}
int main(){
    vector<int> arr1(4);
    for(int i=0;i<4;i++){
        cin>>arr1[i];
    }
    vector<int> arr2(5);
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    vector<int> v=merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}