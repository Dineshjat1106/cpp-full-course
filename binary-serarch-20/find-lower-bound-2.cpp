#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=9;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){ // Change to <= so it includes all elements
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            if(mid>0){// Check for boundary condition to avoid out of bounds
                cout<<"Element found! Previous element: "<<arr[mid-1]<<endl;
            }
            else{
                cout<<"Element found but there is no previous element!"<<endl;
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
        if(hi>=0 && hi<n){ // Ensure hi is within bounds
            cout<<"Element not found! Closest smaller element: "<<arr[hi]<<endl;
        } else {
            cout<<"Element not found and no valid smaller element exists."<<endl;
        }
    }
    return 0;
}