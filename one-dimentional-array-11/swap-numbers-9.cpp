#include<iostream>
using namespace std;
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}
int main(){
    int arr[2]={9,10};
    cout<<arr[0]<<" "<<arr[1];
    cout<<endl;
    fun(arr);
    cout<<arr[0]<<" "<<arr[1];
}