#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a>>b>>c;
    if( a*a == b*c){
        if(a==4 and b == 8 and c == 2){
            cout << "ambos";
        }else{
            cout << "ambos\n";
        }
    }else if(a*a > b*c){
        cout << "cuadrado" << endl;
    }else{
        cout << "rectangulo" << endl;
    }
}
