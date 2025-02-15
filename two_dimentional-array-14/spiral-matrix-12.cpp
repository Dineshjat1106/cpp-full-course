#include<iostream>
using namespace std;
int main(){
int arr[3][3]={1,2,3,4,5,6,7,8,9};
int minr=0;
int maxr=3-1;
int minc=0;
int maxc=3-1;
int totale=3*3;
int count=0;
while(count<totale){
    for(int j=minc;j<=maxc;j++){
        cout<<arr[minr][j];
        count++;
    }
    minr++;
    if(count>=totale) break;
    for(int i=minr;i<=maxr;i++){
        cout<<arr[i][maxc];
        count++;
    }
    maxc--;
    if(count>=totale) break;
    for(int j=maxc;j>=minc;j--){
        cout<<arr[maxr][j];
        count++;
    }
    maxr--;
    for(int i=maxr;i>=minr;i--){
        cout<<arr[i][minc];
        count++;
    }
    minc++;
    if(count>totale) break;
}
}