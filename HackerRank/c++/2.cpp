/*
Algunos tipos de datos de C, sus especuladores de formato y sus anchos de bits más comunes son los siguientes:

    Int ("%d"): 32 Bit integer
    Largo ("%ld"): 64 bits de cerveza
    Char ("%c"): Tipo de carácter
    Flote ("%f": 32 bits de valor real
    Doble ("%llf": 64 bits de valor real
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a;
    long b;
    string c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e ;
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << fixed;
    cout << setprecision(3);
    cout << d << "\n";
    cout << setprecision(9);
    cout << e << "\n";
}