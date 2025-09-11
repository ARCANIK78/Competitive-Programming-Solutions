#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int nMax = 0;
    for(int x=0; x < k+1; x++){
        int oper = x * n;
        if(oper + n-1 <= k){
            nMax = max(nMax, x);
        }
    }
    cout << nMax << endl;
}
