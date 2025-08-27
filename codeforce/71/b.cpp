#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, K, T;
    cin >> N >> K >> T ;
    int total = N * K ; 
    int proceso = (T * total) / 100;
    for(int i = 0; i < N; i++){
        if(proceso > K){ 
            cout << K <<" ";
            proceso -= K;
        }else{
            if(proceso > 0){ 
                cout << proceso << " ";
                proceso = 0;
            }else{
                cout << 0 << " ";
            }
        }
    }
}
