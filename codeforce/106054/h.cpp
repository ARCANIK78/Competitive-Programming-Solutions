#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = n+1;
    for(int i=0; i <= x+1; i++){
        cout << i << "  " << (i % x == 0) << endl;
    }
}
