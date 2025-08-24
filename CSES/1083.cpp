#include <bits/stdc++.h>
using namespace std;

int n,m, xum;

int main(){
    cin >> n;
    for(int i=1; i<= n; i++){
        xum ^= i;
        cout << xum << endl;
    }
    cout << "Soy " << xum << endl;
    for(int i = 0; i < n - 1; i++){
        cin >> m ;
        xum ^= m ;
    }
    cout << xum << endl;
}
