#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<pair<string,int>> people;
    for(int i =0; i < N; i++){
        string nombre;
        int nota;
        cin >> nombre >> nota ;
        people.push_back({nombre, nota});
    }
    sort(people.begin(), people.end(), [](auto &a, auto &b){
        return a.second > b.second;  
    });
    int cont = 1;
    for(auto j:  people){
        cout << "#" << cont << ":" <<j.first << " " << j.second << endl;
        cont++;
        if(cont >= 11){
            break;
        }
    }
}
(x % 2 == 0)