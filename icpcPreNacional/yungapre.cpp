#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int N; //40
    ll T;
    cin >> N >> T;
    vector<ll> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    int n1 = N /2;  //20
    int n2 = N - n1; //20
    vector<ll> x,y;

    for(int mask = 0; mask < (1 << n1); mask++){
        ll s = 0;
        for(int j = 0; j < n1; j++)
            if(mask & ( 1 << j)) s += A[j];
        x.push_back(s);
    }
    for(int mask = 0; mask < (1 << n2); mask++){
        ll s = 0;
        for(int j = 0; j < n2; j++)
            if(mask & (1 << j)) s += A[n1 + j];
        y.push_back(s);
    }
    sort(y.begin(), y.end());
    ll best = 0;
    for(ll sumA : x){
        if(sumA > T) continue;
        ll rem = T - sumA;
        auto it = upper_bound(y.begin(), y.end(), rem);
        if(it != y.begin()){
            --it;
            best = max(best, sumA + *it);
        }
    }
    cout << best << endl;
    return 0;
}
