#include <bits/stdc++.h>
using namespace std;
int main(){
    long long N;
    cin >> N;
    long long horas = N /3600;
    long long minutos = (N % 3600) / 60;
    long long segundos = (N % 60);
    cout << horas << " "<< minutos << " " << segundos << endl;
}
