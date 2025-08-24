#include <bits/stdc++.h>
using namespace std;
int main(){
    int año;
    cin >> año;

    if(año % 4 == 0 && (año % 100 != 0 || año % 400 == 0)){
        cout << "Es bisiesto";
    }else{
        cout << "No es bisiesto";
    }
}