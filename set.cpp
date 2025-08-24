#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; //creamos variable string
    cin >> s; // ingresamos los datos al s;
    unordered_map<char, int> index; // creamos el mapa con un char y int
    int max_len = 0, start = 0; // supongo que es una varible maxima y un start
    for(int i = 0; i < s.length(); i++){
        if(index.count(s[i]) && index[s[i]] >= start){
            start = index[s[i]] + 1;
        }
        index[s[i]] = i;
        max_len = max(max_len, i - start + 1);
    }
    cout << max_len << endl;

}