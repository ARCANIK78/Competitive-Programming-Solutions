#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<int,string> numero = {{2,"two"},{3,"three\n"},{5,"five\n"},{7,"seven\n"}};
    cin >> n;
    if(n == 2 || n == 3 || n == 5 || n == 7) cout << numero[n];
    else cout << "numero no valido" << endl;
}
