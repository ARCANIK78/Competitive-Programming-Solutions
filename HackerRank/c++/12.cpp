#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> estudainte;
    for(int i=0; i< 4; i++){
        string a ; cin >> a;
        estudainte.push_back(a);
    }
    for(auto j : estudainte){
        cout << j << " ";
    }
}
