#include <bits/stdc++.h>
using namespace std;
int main(){
    int N , M, cont=0;
    cin >> N>> M;
    for(int i =0; i < N ;i++){
        int a;
        cin >> a;
        if(a <= M){
            cont++;
        }
    }
    cout << cont << endl;
}
