#include <bits/stdc++.h>
using namespace std;
void comparar(int a, int b){
    int iguales = b; 
    int noigaules = abs(a-b);
    cout << iguales << " " << noigaules /2 << endl;
}
int main(){
    int a,b;
    cin >> a >> b;
    if(a == b){
        cout << a << " " << 0 << endl;
    }else if(a > b){
        comparar(a, b);
    }else if(b > a){
        comparar(b,a);
    }
}
