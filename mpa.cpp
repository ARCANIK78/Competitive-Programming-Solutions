#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> nombres;
    int edad; string nombre;
    int n; cin >> n;
    for(int i=0; i< n; i++){
        cin >> nombre >> edad;
        nombres.insert(make_pair(edad,nombre));
        nombres[edad] = nombre;
    }   
    cout << "La cantidad es: " << nombres.size() << endl;
    for(auto j : nombres ){
        cout << j.first << " - " << j.second << endl;
    }
}
/*
    nombres.insert(make_pair(edad,nombre)); <-- Insertar datos si su clave es igaul lo ignora y no lo cambia
    nombres[edad] = nombre; <-- Inserta datos si el valor es igual se cambia el dato por el nuevo
*/