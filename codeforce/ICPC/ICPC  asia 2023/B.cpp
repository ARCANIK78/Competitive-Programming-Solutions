/*
https://codeforces.com/gym/105627/problem/B
1.-El informe consta de N capitulos.
2.-Los capítulos varían en longitud y ocupan un cierto número de páginas. 
3.-todos los capitulos N se imprimira doble cara en hojas de papel A4.
4.-Evitar tener paginas de 2 capitulos diferntes en la misma hoja de papael A4.
5.-Asegurar que cada capitulos comienza en una nueva pagina.
   de numeros impares.
    agregar una pagina en blanco despues de cada capitulo que tenga un numero impar de paginas.
entrada:
primera linea: un numero entero n la cantidad de capitulos del infrome,n (1 n 100≤100),
segunda linea: indica el numero de paginas en cada capitulo.
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,cont,operacion;
    cin >> n;
    vector<int>v1(n);
    for(int x=0; x<n; x++){
        cin >> v1[x];
    }
    for(int x=0; x<n;x++){
        cont = cont + v1[x];
        if(v1[x]% 2 == 1){
            cont = cont + 1;
        }
    }
    operacion =cont /2;    
    cout << operacion << "\n";
}