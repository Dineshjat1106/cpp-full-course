#include <iostream>
using namespace std;
int main() {
    int arr[9]={5,0,1,2,0,0,4,0,3};
    int n=9;
    int pos=0;
    for (int i=0;i<n;i++) {
        if(arr[i]!=0){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}