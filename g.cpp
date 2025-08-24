#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string linea;
    cin >> linea;
    stringstream ss(linea);
    int valor;
    while (ss >> valor) {
        cout << "Valor: " << valor << endl;
    }
    return 0;
}
