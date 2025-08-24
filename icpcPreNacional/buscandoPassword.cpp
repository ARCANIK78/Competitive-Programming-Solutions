#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, dato;
    cin >> s;
    for(auto j : s){
        if(j == 'l' || j == 'I' || j == 'O' || j =='0' || j == 'B'){
            dato = "SI";
            break;
        
        }else{
            dato = "NO";
        }
    }
    cout << dato;
}