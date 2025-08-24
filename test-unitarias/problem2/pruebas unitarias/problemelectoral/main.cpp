#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int conteo_magico(int n, ll k, const vector<ll>& a){
    ll total = 0;
    for(auto x : a) total += x;

    ll target = (((total % k ) + k) % k);
    int count = 0;
    for(auto x : a){
        ll mod_x = ((x % k) + k) % k;
        if(mod_x == target) count++;
    }
    return count;
}