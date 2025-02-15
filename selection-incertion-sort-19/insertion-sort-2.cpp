#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int arr[n]={4,2,5,1,3};
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}