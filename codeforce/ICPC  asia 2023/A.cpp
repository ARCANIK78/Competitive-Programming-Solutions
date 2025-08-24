//https://codeforces.com/gym/105627/problem/A
//Mi solucion
#include <iostream>
using namespace std;
int main(){
    int a,cont;
    cont=0;
    cin >> a;
    for(int x=1;x <=a;x++){
        if(x % 10 == 0){
            cont++;
        }
    }
    cout << cont;
}
//Solucion mejor
#include <iostream>
using namespace std;
int main(){
    int a, form;
    cin >> a;
    form = a / 10;
    cout << form;
}