#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotEle=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotEle) count++;
    }
    int pivotIdx=count+si;
    swap(arr[si],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotEle){
            i++;
        }
        if(arr[j]>pivotEle){
            j--;
        } else if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int kthsmall(int arr[],int si,int ei,int k){
    if(si<=ei){
        int pi=partition(arr,si,ei);
        if(pi+1==k) return arr[pi];
        else if(pi+1>k) return kthsmall(arr,si,pi-1,k);
        else return kthsmall(arr,pi+1,ei,k);
    }
    return -1; 
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4,-8};
    int n=9;
    int k=4; 
    cout<<"The "<<k<<"-th smallest element is: "<<kthsmall(arr,0,n-1,k)<<endl;
    return 0;
}