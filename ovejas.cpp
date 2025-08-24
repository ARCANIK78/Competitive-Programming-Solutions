#include <bits/stdc++.h>
using namespace std;
int main(){
    int p,n, contador; 
    contador = 0;
    cin >> p; 
    for(int i=0; i < p; i++){
        cin >> n; 
        for( int x=0; x < n ; x++){
            string animales;
            cin >> animales;
            if( animales == "oveja"){
                contador++;
            }
        }
        cout << contador << endl;
        contador=0;
    }
}
/*

2
4
oveja
vaca
perro
oveja
3
perro
vaca
oveja

ouput 
2
*/