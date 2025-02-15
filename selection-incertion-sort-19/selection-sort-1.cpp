#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int arr[n]={4,2,5,1,3};
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int minx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minx=j;
            }
        }
        swap(arr[i],arr[minx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}