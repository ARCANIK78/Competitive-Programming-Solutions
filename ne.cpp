#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    do{
        cin >> t;
        if(t <= 0 ){
            continue;
        }
        if(t % 2 == 0){
            cout << "Numero por valido " << t << "\n";
        }

    }while(t != 999);
    cout << "Termino";
}
int main(){
    int t;
    while(true){
        if(t == 999){
            break;
        }
        if(t <=0 ){
            continue;
        }
        if(t % 2 == 0){
            cout << "Numero par vaildo";
        }
    }
    cout << "Programa terminado" << "\n";
}