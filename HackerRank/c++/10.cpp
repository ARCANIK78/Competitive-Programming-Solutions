#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(auto j : s){
        if(j == ','){
            cout << endl;
            continue;
        }
        cout << j ;
    }
}
