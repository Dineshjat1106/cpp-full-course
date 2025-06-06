#include<iostream>
using namespace std;
void print(int arr[3][3]){
    for(int i=0;i<3;++i) {
        for(int j=0;j<3;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rotate(int arr[3][3]){
    for(int i=0;i<3;++i){
        for(int j=0;j<i;++j){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<3/2;++j){
            int temp=arr[i][j];
            arr[i][j]=arr[i][3-j-1];
            arr[i][3-j-1]=temp;
        }
    }
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    rotate(arr);
    print(arr);
}