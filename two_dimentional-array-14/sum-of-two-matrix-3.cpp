#include<iostream>
using namespace std;
int main(){
    int arr[2][2]={1,2,3,4};
    int brr[2][2]={5,6,7,8};
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}