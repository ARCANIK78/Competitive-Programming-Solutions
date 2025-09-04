#include <bits/stdc++.h>
using namespace std;
int suma_digito(int x){
    int suma = 0;
    while (x > 0){
        suma += x % 10;
        x /= 10;
    }
    return suma;
    
}
int main(){
    long long N, K;
    cin >> N >> K;
   priority_queue<int> flores;
   for(int i =0; i < N; i++){
    int f; cin >> f;
    flores.push(f);
   } 
   int polen = 0;
   for(long long i =1; i <=K;i++){
        if(flores.empty()){
            polen = 0;
            break;
        }
        int mayor = flores.top(); flores.pop();
        polen = suma_digito(mayor);
        mayor -= polen;
        if(mayor > 0) flores.push(mayor);
    }
    cout << polen << endl;
}


