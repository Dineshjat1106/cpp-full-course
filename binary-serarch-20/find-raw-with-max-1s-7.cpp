#include<iostream>
using namespace std;
int main(){
    int arr[5][6]={
        {0,0,0,0,1,1},
        {0,0,1,1,1,1},
        {0,0,0,1,1,1},
        {0,1,1,1,1,1},
        {0,0,0,1,1,1}};
        int m=5;
        int n=6;
        int raw=-1;
        int maxone=-1;
        int x=1;
        for(int i=0;i<m;i++) {
        int count=0;
        int lo=0;
        int hi=n-1;
        int fidx=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[i][mid]==x){
                if(mid==0||arr[i][mid-1]!=x){
                    fidx=mid;
                    break;
                } 
                else{
                    hi=mid-1;
                }
            }
            else if(arr[i][mid]<x){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        if(fidx!=-1){
            count=n-fidx;
        }
        if(count>maxone){
            maxone=count;
            raw=i;
        }
    }
    cout<<"Row with maximum 1s: "<<raw<<"\n";
    cout<<"Maximum number of 1s: "<<maxone<<"\n";
    return 0;
}