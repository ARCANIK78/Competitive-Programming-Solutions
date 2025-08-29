#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, cont =0;
    cin >> N;
    for(int i=0; i < N; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a +b+c >= 2){
            cont++;
        }
    }
    cout << cont << endl;

}
