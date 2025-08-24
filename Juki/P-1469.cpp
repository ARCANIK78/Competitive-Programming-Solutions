#include <bits/stdc++.h>
using namespace std;
int main(){
    int cont_0 = 0 , cont_1 = 0;
    string grupo, respuest;
    cin >> grupo;
    for(auto j : grupo){
        if(cont_0 >= 7 || cont_1 >= 7){
            respuest = "SI";
            break;    
        }else{
            if( j == '0'){
                cont_0 += 1;
                cont_1 = 0;
                respuest = "NO";
            }else if( j == '1'){
                cont_1 += 1;
                cont_0 = 0;
                respuest = "NO";
            }
        }        
    }
    cout << respuest <<endl;
}