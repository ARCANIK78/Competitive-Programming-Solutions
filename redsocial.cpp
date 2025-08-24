#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string nombre1, nombre2;
    set<string> unicos;
    for(int i=0; i < n; i++){
        cin >> nombre1 >> nombre2;
        unicos.insert(nombre1);
        unicos.insert(nombre2);
    }
    cout << unicos.size();

}
/*
entrada:
5
Luis Ana
Pedro Luis
Carlos Pedro
Ana Maria
Maria Ana

salida:
5

*/