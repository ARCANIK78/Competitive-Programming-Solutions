#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n; cin >> n;
    vector<ll> casas;
    for(ll i =0; i < n ;i++){
        ll a; cin >> a;
        casas.push_back(a);
    }
    sort(casas.begin(), casas.end());
    cout << casas[n/2] << endl;    
}
