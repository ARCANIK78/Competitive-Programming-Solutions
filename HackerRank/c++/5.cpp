#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int maximo(int a,int b,int c, int d){
    return max(max(a,b), max(c,d));
}
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int retor = maximo(a,b,c,d);
    cout << retor;
    return 0;
}