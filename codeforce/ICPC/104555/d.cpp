#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e15;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<tuple<int,int,long long>> edges;
    vector<vector<long long>> dist(N+1, vector<long long>(N+1, INF));

    for (int i=1;i<=N;i++) dist[i][i]=0;

    for (int i=0;i<M;i++) {
        int u,v;
        long long l;
        cin >> u >> v >> l;
        edges.push_back({u,v,l});
        dist[u][v] = min(dist[u][v], l);
        dist[v][u] = min(dist[v][u], l);
    }

    // Floyd-Warshall
    for (int k=1;k<=N;k++)
        for (int i=1;i<=N;i++)
            for (int j=1;j<=N;j++)
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];

    // Responder cada arista
    for (auto [u,v,l] : edges) {
        long long best = INF;
        for (int k=1;k<=N;k++) {
            if (k==u || k==v) continue;
            if (dist[u][k] < INF && dist[k][v] < INF) {
                best = min(best, dist[u][k] + dist[k][v]);
            }
        }
        if (best == INF) cout << -1 << "\n";
        else cout << best << "\n";
    }
}
