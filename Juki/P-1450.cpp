#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, X;
    cin >> N >> X;
    vector<int> conjunto;
    for(int i=0; i < N; i++){
        int a;
        cin >> a;
        if(a % X == 0){
            conjunto.push_back(a);
        }
    }
    for(auto j : conjunto){
        cout << j << " ";
    }
}