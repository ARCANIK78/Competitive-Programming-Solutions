#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    priority_queue<int> pila;
    while (n--)
    {
        int a; cin >> a;
        if(a == 1){
            int aa ; cin >> aa;
            pila.push(aa);
        }else if(a == 2){
            if(pila.empty()){
                continue;
            }else{
                pila.pop();
            }
        }else if(a == 3){
            if(pila.empty()){
                cout << "pila vacia" << endl;
            }else{
                cout << pila.top() << endl;
            }
        }
    }
}
