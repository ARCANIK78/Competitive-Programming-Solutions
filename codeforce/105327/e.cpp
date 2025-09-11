#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a = 1, b = 1, aux;
    for(int i=0; i < n-1; i++){
        aux = a + b;
        a = b;
        b = aux;
    }
    cout << b << endl; 
}
