#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int mayor = max(x,y);
    int menor = min(x,y);
    for(int i = mayor ; i >= menor; i--){
        cout << i  << endl;
    }
    
}