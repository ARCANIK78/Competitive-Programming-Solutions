#include <bits/stdc++.h>
using namespace std;
void dividir(string cadan){
    if((cadan[0] + cadan[1] + cadan[2]) ==  (cadan[3] + cadan[4] + cadan[5])){
        cout << "YES" << endl;
    }else{
        cout << "NO"<< endl;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i =0 ; i < n ;i++){
        string cadena;
        cin >> cadena ;
        dividir(cadena);
    }
}
