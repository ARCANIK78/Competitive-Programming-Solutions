#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main(){
    int N,M;
    cin >> N >> M;
    vector<vector<int>> distancia(N+1, vector<int>(N+1,INF));
    for(int i=1; i <=N;i++) distancia[i][i] =0;

    for(int i=0; i <M; i++){
        int u,v,w;
        cin >> u >> v >> w;
        distancia[u][v] = w;
        distancia[v][u] = w;
    }
    for(int k=1; k<=N; k++){
        for(int i=1; i<=N;i++){
            for(int j=1; j<=N; j++){
                if(distancia[i][k] < INF && distancia[k][j] < INF){
                    distancia[i][j] = min(distancia[i][j], distancia[i][k] + distancia[k][j]);
                }
            }
        }
    }
    cout << " Matriz de distancia mas corta:\n" << endl;
    for(int i=1; i<=N;i++){
        for(int j=1; j<=N; j++){
            if(distancia[i][j] == INF) cout << " INF ";
            else cout << distancia[i][j] << " ";
        }
        cout << endl;
    }

}
