#include <bits/stdc++.h>
using namespace std;
struct Arista { int destino, peso; };
 
int main(){
    int n ,m;
    cin >> n >> m;
    vector<vector<Arista>> grafo(n+1);
    for(int i=0; i < m; i++){
        int u,v,w;
        cin >> u >> v >> w;
        grafo[u].push_back({v,w});
        grafo[v].push_back({u,w});
    }
    const int INF = 1e9;
    vector<int> dist(n+1, INF);
    dist[1] = 0;
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0,1});

    while (!pq.empty()){
        auto [d, u] = pq.top(); pq.pop();
        if(d > dist[u]) continue;
        for(auto &Arista : grafo[u]){
            int v = Arista.destino;
            int w = Arista.peso;
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    for(int i = 1; i<= n ; i++){
        cout << "Nodo "<< i << " -> " << dist[i] << "\n";
    }
    cout << "tamaño " << dist.size() << endl;
}
