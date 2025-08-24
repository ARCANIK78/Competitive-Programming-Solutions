#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b, cont;
    cont=0;
    unordered_set<int> v1;
    cin >> a;
    for(int i=0; i < a; i++){
        int n;
        cin >> n;
        v1.insert(n);
    }
    cin >> b;
    for(int i=0; i < b; i++){
        int n;
        cin >> n;
        if(v1.count(n)){
            cont++;
        }
    }
    cout << cont << endl;
}

/*

Entrada:
5
1 2 3 4 5
4
3 4 6 7

Salida:
2

*/