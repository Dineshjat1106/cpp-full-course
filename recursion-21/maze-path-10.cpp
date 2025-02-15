#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right=maze(sr,sc+1,er,ec);
    int down=maze(sr+1,sc,er,ec);
    int total=right+down;
    return total;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'r');
    printpath(sr+1,sc,er,ec,s+'d');
}
int main(){
    cout<<maze(0,0,3,4)<<endl;
    printpath(0,0,3,4," ");
}