#include <bits/stdc++.h>
using namespace std;
int Fibo(int n){
    if(n==1 or n==2) return 1;
    return Fibo(n-1)+ Fibo(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << Fibo(n) << endl;
    return 0;
}
