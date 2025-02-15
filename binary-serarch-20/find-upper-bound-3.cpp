#include <iostream>
using namespace std;
int main() {
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=9;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){ 
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            if(mid+1<n){ 
                cout<<"Next element: "<<arr[mid+1]<<endl;
            } 
            else{
                cout<<"Element found but no next element exists!"<<endl;
            }
            break;
        }
        else if(arr[mid]<x){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(!flag){
        if(lo<n){
            cout<<"Element not found. Closest larger element: "<<arr[lo]<<endl;
        }
        else {
            cout<<"Element not found and no valid larger element exists."<<endl;
        }
    }
    return 0;
}
