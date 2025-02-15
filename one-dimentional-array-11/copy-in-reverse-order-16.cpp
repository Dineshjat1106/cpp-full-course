#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int brr[10];
    for(int i=0;i<=9;i++){
        brr[i]=arr[9-i];
    }
    for(int i=0;i<10;i++){
        cout<<brr[i]<<" ";
    }
}