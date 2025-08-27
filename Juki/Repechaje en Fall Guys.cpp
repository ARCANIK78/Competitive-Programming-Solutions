/*https://judge.juki.app/contests/T-zB5?tab=problems&subTab=A*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N , total_sum = 0, cont = 0 ;
    cin >> N;
    map<int,int> jugadores;
    for(int i=1; i <= N; i++){
        int a ;
        cin >> a;
        total_sum += a;
        jugadores[i] = a;
    }
    int mejorjugador = 0;
    int mejorsuma = -1;
    for(auto &par : jugadores){
        int indice = par.first;
        int valor = par.second;
        if(valor % 3 == 0) continue;
        if(valor % 2 != 0) continue;

        if(valor > mejorsuma){
            mejorsuma = valor;
            mejorjugador = indice;
        }
    }
    cout << mejorjugador << endl;
    return 0;
}
/*
for (auto j : jugadores){
        if( j % 3 == 0){
            cout << "noup ";
        }else if(j % 2 != 0){
            cout << "nouptambien ";
        }else{
            cout << j << " ";
        }
    }*/
