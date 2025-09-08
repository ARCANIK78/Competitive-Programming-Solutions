#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string target = "TAP";
    int j=0;
    for(char c : s){
        if(c == target[j]){
            cout << target[j] << endl;
            j++;
            if(j== target.size()) break;
        }
    }
    if(j == target.size()) cout << "S" << endl;
    else cout << "N" << endl;
}
