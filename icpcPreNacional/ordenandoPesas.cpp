/*
5
5 5 10 10
15 15 20 20

6
1 2 3 1 2 5
1 2 4 4 3 5
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string estado;
    int n ;
    cin >> n;

    for(int i=0; i < 2; i++){
        for(int y=0; y < (n/2);y++){
            int a,b;
            cin>> a >> b;
            if(a == b){
                estado = "SI";
            }else{
                estado = "NO";
                break;
            }
        }
    }
    cout << estado << endl;
}

