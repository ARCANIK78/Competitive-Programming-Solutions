#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a; 
    vector<int> m;

    for(int i = 0; i < a; i++){
        int val;
        cin >> val;
        m.push_back(val);
    };
    for(int j : m){
        cout << j;
    }
}    