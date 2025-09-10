#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> jugadores(n,0);
    
    int ines = 0;
    for(int i=0;i< m;i++){
        int x,y;
        cin >> x >> y;
        vector<int> rondas(n);
        for(int h=0; h < n; h++){
            cin >> rondas[h];
        } 

        int c = count(rondas.begin(), rondas.end(),1);
        int op1 = x / (c + 1);
        
        if(op1 >= y ){
            ines += op1;
        }else{
            ines += y;
            if (c > 0) op1 = x / c;
        }
        for(int j=0; j < n;j++){
            if(rondas[j] == 2){
                jugadores[j] += y;
            }else{
                jugadores[j] += op1;
            }
        }
    }
    for(auto j: jugadores){
        cout << j << " ";
    }
    cout << ines << endl;
}
