#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
void store(string ans, string original, set<string>& s) {
    if(original.empty()) {
        s.insert(ans); 
        return;
    }
    char ch = original[0];
    store(ans + ch, original.substr(1), s); 
    store(ans, original.substr(1), s);      
}
int main() {
    string str = "aab";
    set<string> s; 
    store("", str, s);
    for(const auto& subseq : s) {
        cout << subseq << " ";
    }
    return 0;
}
