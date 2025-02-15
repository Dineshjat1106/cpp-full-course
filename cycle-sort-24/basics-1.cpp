#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,6,2,3,5};
    int n=6;
    int i=0;
    while(i<n){
        int correctidx=arr[i]-1;
        if(i==correctidx) i++;
        else swap(arr[i],arr[correctidx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}