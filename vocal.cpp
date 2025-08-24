#include <bits/stdc++.h>
using namespace std;
int main(){
    int cont;
    cont = 0;
    string palabra; cin >> palabra;
    set<char> vocal;

   for(char j : palabra){
        if(j == 'a' || j == 'e' || j == 'i' || j == 'o' || j == 'u'){
            vocal.insert(j);
        }
   }
   cout << vocal.size();
}