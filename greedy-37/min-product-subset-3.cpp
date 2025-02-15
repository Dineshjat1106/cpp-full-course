#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int product(vector<int>& arr){
    int cn=0,cz=0,cp=0;
    int propos=1;
    int proneg=1;
    int larneg=INT32_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            cn++;
            proneg=proneg*arr[i];
            larneg=max(larneg,arr[i]);
        }
        if(arr[i]==0) cz++;
        if(arr[i]>0){
            cp++;
            propos=propos*arr[i];
        }
    }
    if(cn==0){
        if(cz>0) return 0;
        else{
            auto it=min_element(arr.begin(),arr.end());
            return *it;
        }
    }
    else{
        if(cn%2==0) return (proneg/larneg)*propos;
        else return proneg*propos;
    }    
}
int main(){
    vector<int> arr{-2,-3,1,4,-2};
    cout<<product(arr)<<endl;
}