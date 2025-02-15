#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,4,4,5,5,5,5,5,6};
    int n=15;
    int x=2;
    int lo=0;
    int hi=n-1;
    int result=-1;  
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(mid==0||arr[mid-1]!=x){
                result=mid; 
                break;
            } 
            else{
                hi=mid-1;
            }
        }
        else if(arr[mid]<x){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(result!=-1){
        cout<<"First occurrence of "<<x<<" is at index: "<<result<<endl;
    }
    else{
        cout<<x<<" not found in the array."<<endl;
    }
    return 0;
}