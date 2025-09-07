#include <bits/stdc++.h>
using namespace std;
struct Arista{ int destino, peso; };
const int INF = 1e9;
int main(){
    int n, c;
    cin >> n >> c;
    vector<vector<Arista>> grafo(n+1);
    
    vector<int> dist(n+1, INF);
    dist[1] = 0;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0,1});

    while (!pq.empty()){
        auto [d, u] = pq.top(); pq.pop();
        if(d > dist[u]) continue;
        for( auto &Arista : grafo[u]){
            int v = Arista.destino;
            int w = Arista.destino;
            if(dist[u] + w < dist[v]){
                
            }
        }
    }
    
}
