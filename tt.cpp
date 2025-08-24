#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
  int n;
  cin >> n;
  ll t;
  cin >> t;
  vector<ll> conjunto(n);
  for(int i=0; i < n; i++) cin >> conjunto[i];
  sort(conjunto.begin(), conjunto.end());
  
  vector<bool> dp(t+1, false);
  dp[0] = true;
  for(ll x: conjunto){
    for(ll j = t; j >= x; j--){
      if(dp[j - x]) dp[j] = true;
    }
  }
  if(dp[t]) cout << t << endl;
  else cout << 0 << endl;
}

/*

5 17

*/