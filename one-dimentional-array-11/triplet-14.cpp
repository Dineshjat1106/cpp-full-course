#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x=12;
    int triplet=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            for(int k=j+1;k<10;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    triplet++;
                }
            }
        }
    }
    cout<<triplet;
}