#include <bits/stdc++.h>
using namespace std;
int main(){
    int h1,h2, m1,m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int h_salida = h1 * 60 + m1; 
    int h_llegada = h2 * 60 + m2;

    if( h_llegada < h_salida){
        h_llegada += 24 * 60;
    }

    int tiempo = h_llegada - h_salida;
    int hora = tiempo / 60;
    int minutos = tiempo % 60;
    cout << hora << " " << minutos << endl;
    
}