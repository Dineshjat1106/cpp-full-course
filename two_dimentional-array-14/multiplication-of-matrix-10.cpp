#include<iostream>
using namespace std;
int main(){
    int a[3][2]={1,2,3,4,5,6};
    int b[2][4]={1,2,3,4,5,6,7,8};
    int res[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            res[i][j]=0;
            for(int k=0;k<2;k++){
                res[i][j]=res[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}