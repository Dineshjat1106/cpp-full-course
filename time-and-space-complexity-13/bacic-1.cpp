#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n+1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n+1;i++){
        sum=sum+arr[i];
    }
    int s=n*(n+1)/2;
    cout<<sum-s;
}