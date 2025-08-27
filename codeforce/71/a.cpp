#include <bits/stdc++.h>
using namespace std;
int main(){
    int N ;
    cin >> N;
    for(int i=0; i < N ; i++){
        string palabra;
        cin >> palabra;
        if(palabra.size() > 10){
            int ultima_p = palabra.size();
            cout << palabra[0] << palabra.size() -2 <<  palabra[ultima_p-1] << endl;
        }else{
            cout << palabra << endl;
        }
    }
}
/*
https://codeforces.com/problemset/problem/71/a
*/
