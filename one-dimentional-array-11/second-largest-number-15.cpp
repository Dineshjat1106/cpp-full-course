#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int max=0;
    int smax=0;
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]){
            smax=arr[i];
        }
    }
    cout<<smax;
}