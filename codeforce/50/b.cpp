#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long cantidad = s.size();
    unordered_map<char,long long> palabra;
    for(long long x=0; x < cantidad; x++){
        palabra[s[x]]++;
    }
    long long cont = 0;
    for(auto p : palabra){
        if(p.second > 1){
            cont += p.second * p.second;
        }else{
            cont += p.second ;

        }
    }
    cout <<cont << endl;
}
