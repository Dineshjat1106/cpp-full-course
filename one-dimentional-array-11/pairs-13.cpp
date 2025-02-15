#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x=12;
    int pair=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]+arr[j]==x){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                pair++;
            }
        }
    }
    cout<<pair;
}