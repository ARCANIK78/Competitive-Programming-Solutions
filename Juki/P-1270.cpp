#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> person (n);
    string resul = "";
    for(int i=0; i < n; i++){
        cin >> person[i];
        if(x == 0){
            resul = "NO";
            break;
        }else{
            if(person[i] == 1){
                x -= 1;
                resul = "SI";
            }else{
                resul = "SI";
            }
        }    
    }
    cout << resul;
    cout << endl;
}
