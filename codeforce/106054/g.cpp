#include   <bits/stdc++.h>
using namespace std;
int main(){
    int a ,b ,c;
    cin >> a >> b >> c;
    int vuelto = abs(a-b);
    if(vuelto % c == 0) cout << "S" << endl;
    else cout << "N" << endl;
}
