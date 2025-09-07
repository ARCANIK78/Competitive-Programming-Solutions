#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> valores;
    for(int i=0; i < 10; i++){
        int a; cin >> a;
        valores[a]++;
    }
    int mejor = -1;   
    int rep = -1;     
    for (auto &p : valores) {
        int problema = p.first;
        int veces = p.second;
        if (veces > rep || (veces == rep && problema > mejor)) {
            rep = veces;
            mejor = problema;
        }
    }

    cout << mejor << "\n";
    return 0;
}
