#include <bits/stdc++.h>
using namespace std;
int main(){
    int N ;
    cin >> N;
    for(int i=1; i <= N; i++){
        cout << "Tabla del " << i << endl;
        for(int y=1; y <= 10; y++){
            cout << i << "x" << y << "=" << i*y << endl;

        }
    }
}