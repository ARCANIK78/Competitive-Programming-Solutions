#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    ll N, K, sumaTotal = 0;
    cin >> N >> K;
    vector<ll> datos(N);
    for(int i=0; i < N; i++){
        cin >> datos[i];
        sumaTotal += datos[i];
    }
    int cont = 0;
    for(auto j : datos){
        if((sumaTotal - j) % K == 0  ){
            cont += 1;
        }
    }
   cout << cont << endl;
}