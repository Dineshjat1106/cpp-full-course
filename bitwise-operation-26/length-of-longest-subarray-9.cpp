#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={12,3,1,6,1,6,6,6,6,4,3,8,13,13,13,13,8};
    int n=17;
    int ans=0;
    int max=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            count=1;
        }
        else if(arr[i]==max){
            count++;
        }
        ans=std::max(ans,count);
    }
    cout<<ans;
}