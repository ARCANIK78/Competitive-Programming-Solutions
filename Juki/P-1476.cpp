#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, aux = 1;
    cin >> N;
    for(int i = 1 ; i <= N; i++){
        aux *= i;
    }
    cout << aux << endl;
}
