#include <bits/stdc++.h>
using namespace std;
int main(){
    int N , impar=0, par=0;
    cin >> N;
    for(int i=0; i < N ; i++){
        int a ;
        cin >> a;
        if(a % 2 == 0){
            par += 1;
        }else{
            impar += 1;
        }
    }
    cout << "par " << par << " " << "impar" << impar << endl;
    if(par == impar){
        cout << "EMPATE" << endl;
    }else if(par > impar){
        cout << "PAR" << endl ;
    }else{
        cout << "IMPAR" << endl;
    }
}