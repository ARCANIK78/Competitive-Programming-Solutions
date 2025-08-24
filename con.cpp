#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    set<int> unicos;
    int in;
    for(int j=0; j < n ; j++){
        cin >> in;
        unicos.insert(in);
    }
    cout << unicos.size() << endl; 
}

/*

Entrada:
6
1 2 2 3 3 3

3
*/