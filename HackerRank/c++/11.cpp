#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    string c1 = a;
    string c2 = b;
    c1[0] = b[0];
    c2[0] = a[0];
    cout << c1 << " " << c2 << endl;
}
