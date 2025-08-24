#include <iostream>
using namespace std;
int main(){
    int a,b;
    int *p1;
    int *p2;
    cin >> a >> b;
    p1= &a;
    p2= &b;
    cout << abs(*p1 + *p2) << "\n";
    cout << abs(*p1 - *p2)  << "\n";
   
}