#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivatele=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivatele) count++;
    }
    int pivatidx=count+si;
    swap(arr[si],arr[pivatidx]);
    int i=si;
    int j=ei;
    while(i<pivatidx && j>pivatidx){
        if(arr[i]<=pivatele) i++;
        if(arr[j]>pivatele) j--;
        else if(arr[i]>pivatele && arr[j]<=pivatele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivatidx;
}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=8;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}