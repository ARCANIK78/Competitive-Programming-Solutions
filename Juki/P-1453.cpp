#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll N, M;
    string estado = "";
    cin >> N >> M;
    for(ll i=0; i < M; i++){
        int U;
        cin >> U;
        N -= U;
        if(N <= 0){ 
            estado = ":(";
            break;
        }else{
            estado = ":)";
        }
    }
    cout << estado << endl;
}