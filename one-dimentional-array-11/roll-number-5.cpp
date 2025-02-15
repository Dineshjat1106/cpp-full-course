#include<iostream>
using namespace std;
int main(){
   int arr[10]={95,90,31,25,100,50,65,89,97,30};
   for(int i=0;i<10;i++){
      if(arr[i]<35) cout<<i<<" ";
   }
}