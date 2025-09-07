#include <bits/stdc++.h>
using namespace std;
int main(){
    long double h;
    long long k;
    if(!(cin >> h >> k)) return 0;
    const long double SQ3 = sqrt((long double)3.0L);
    long double denom = powl(4.0L, (long double)k);
    long double area = (SQ3 / 3.0L) * (h * h) / denom;
    cout.setf(std::ios::fixed);
    cout << setprecision(10) << (double)area << endl;
}
