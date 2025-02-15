#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int flag=false;
    for(int i=0;i<10;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"true";
    else cout<<"false";
}