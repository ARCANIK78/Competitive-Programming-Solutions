#include <bits/stdc++.h>
using namespace std;
int main(){
    string contrasena;
    cin >> contrasena;
    int mayus = 0, minus = 0, num = 0;
    for(auto j : contrasena){
        if(isupper(j)){
            mayus++;
        }else if(islower(j)){
            minus++;
        }else if(isdigit(j)){
            num++;
        }
    }
    if(contrasena.size() >= 8 and mayus >= 1 and minus >=1 and num >= 1){
        cout << "BUENA" << endl;
    }else{
        cout << "MALA" << endl;
    }
}