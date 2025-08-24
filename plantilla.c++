#include <bits/stdc++.h>
using namespace std;

// Macros útiles
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(v) v.begin(), v.end()
#define pb push_back
#define fi first
#define se second

// Alias comunes
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

// Constantes útiles
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7; // o 998244353
const double EPS = 1e-9;
const double PI = acos(-1.0);

// Función para exponenciación rápida (a^b % mod)
ll mod_pow(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// Función principal
int main() {
    fast_io; // Acelera lectura y escritura

    // ---- Código del problema aquí ----
    int t = 1; // Cambia si hay múltiples casos
    // cin >> t;

    while (t--) {
        // ejemplo de entrada
        string s;
        cin >> s;

        unordered_map<char, int> index;
        int max_len = 0, start = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (index.count(s[i]) && index[s[i]] >= start) {
                start = index[s[i]] + 1;
            }
            index[s[i]] = i;
            max_len = max(max_len, i - start + 1);
        }

        cout << max_len << '\n';
    }

    return 0;
}