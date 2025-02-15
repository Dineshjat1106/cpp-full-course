#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={76,80,57,46,40,48,21,78};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}