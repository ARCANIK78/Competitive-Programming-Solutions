#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,a,b,c,maximos;
    cin >> n;
    vector<int> empleados(n);
    for(int x=0;x < n;x++){
        cin >> a;
        cin >> b;
        cin >> c;
        maximos = max( min(a,b), min(a,c));
        empleados[x] = maximos; 
    }
    for(int x =0; x <n;x++){
        cout << "El sueldo del empleado es: "<<empleados[x] << "\n ";
    }
}
/*
3
1000 2000 3000
3000 2500 1500
1500 1200 1800
*/