#include  <bits/stdc++.h>
using namespace std;
bool Grafo[100][100];
int main(){
    int n,m,u,v;
    for(int i=0; i < 100;i++)
        for(int j=0; j < 100; j++) Grafo[i][j] = false;
        
    cin >> n >> m;
    for(int i =0; i <m; i++){
        cin >> u >> v;
        Grafo[u][v] = true;
    }
    return 0;
    
}
