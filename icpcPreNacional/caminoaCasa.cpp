#include <bits/stdc++.h>
using namespace std;
struct Aristas{
    int destino, peso;
};
int main(){
    int N,M,K;
    cin >> N >> M >> K; /*N intersecciones  M calles  K esfuerzo*/
    vector<vector<Aristas>> grafo(N+1);
    for(int i=0; i < M; i++){
        int u,v,w;
        cin >> u >> v >> w;
        grafo[u].push_back({v,w});
        grafo[v].push_back({u,w});
    }
    const int INF = 1e9;
    vector<int> dist(N+1,INF);
    dist[1] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0,1});
    while (!pq.empty())
    {
        auto[d,u] = pq.top(); pq.pop();
        if(d > dist[u]) continue;
        for(auto &arista : grafo[u]){
            int v = arista.destino;
            int w = arista.peso;
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    if(dist[N] <= K){
        cout << "SI" << endl;
    }else{
        cout << "NO" << endl;
    }
}
/*
4 4 8
1 2 5
2 3 2
3 4 1
1 4 10
*/
