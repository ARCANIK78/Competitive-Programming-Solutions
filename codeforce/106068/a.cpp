#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s ;
    int abierto = 0;
    for(char j : s){
        if(j == '('){
            abierto++;
        }else{
            abierto--;
            if(abierto < 0){
                break;
            }
        }
    }
    if(abierto == 0){
        cout << "Yes"<<  endl;
    }else {
        cout << "No" << endl;
    }
}
