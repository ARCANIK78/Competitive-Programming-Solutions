#include <bits/stdc++.h>
using namespace std;
struct Aristas{ int destino, peso; };
const int INF = 1e9;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<Aristas>> grafo(n+1);
    for(int i=0; i <m ; i++){
        int u, v ,w;
        cin >> u >>v >> w;
        grafo[u].push_back({v,w});
    }
    vector<int> dist(n+1, INF);
    dist[1] = 0;
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0,1});
    while(!pq.empty()){
        auto [d, u] = pq.top(); pq.pop();
        cout << "Procesando nodos " << u << "con distancia " << d << endl;
        if(d > dist[u]) continue;
        cout << "acepto" << endl;
        for(auto &Aristas : grafo[u]){
            int v = Aristas.destino;
            int w = Aristas.peso;
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout << "Nodo " << i << " -> " << dist[i] << "\n";
    }
    
}
