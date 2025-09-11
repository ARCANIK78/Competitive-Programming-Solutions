#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int cont_s1 = 0;
    int cont_s2 = 0;
    for(auto j: s1){
        cont_s1 += tolower(j);
    }
    for(auto l: s2){
        cont_s2 += tolower(l);
    }
    cout << " " << cont_s1 << " " << cont_s2 << endl;
    if(cont_s1 == cont_s2){
        cout << "0" << endl;
    }else if(cont_s1 < cont_s2){
        cout << "-1" << endl;
    }else{
        cout << "1" << endl;
    }
}
