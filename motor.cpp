#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p,m;
    int r;

    p=0;
    m=0;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> r;
        if(r > m){ //100 < 199
            m=r; // m=199  m es aumento;
            p++;
        }else if(r == m){
           p++;
        }else{
            p++;
            break;
        }
    }
    if(r == m){
        cout << 0;
    }else{
        cout << abs(p);
    }
}


