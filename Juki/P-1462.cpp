#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, luis = 0,beto = 0;
    cin >> N;
    for(int i=0; i < N; i++){
        int x;
        cin >> x;
        if(x >= 500){
            beto += 1;
        }else{
            luis += 1;
        }
    }
    cout << "Beto: " << beto << endl;
    cout << "Luis: " << luis;
}