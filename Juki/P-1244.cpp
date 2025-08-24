/*serie*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int serie = 2;
    cout << 2 << ", ";
    for( int i=0; i < n-1; i++){
        serie  = serie + 5;
        cout << serie << ", " ;
    }
}