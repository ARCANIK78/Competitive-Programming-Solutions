#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> m(n);
    for(int x=0;x<n; x++) cin >> m[x];
    cout << *max_element(m.begin(), m.end()) << "\n";
    cout << *min_element(m.begin(), m.end()) << "\n";
}

/*

1. la 1 por la 2
2. la 1 por la 3
3. la 1 por la 4
4. la 2 por la 3
5. la 2 por la 4
6. la 3 por la 4


2

3
4
2
3




*/