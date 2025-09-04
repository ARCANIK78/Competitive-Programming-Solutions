#include <bits/stdc++.h>
using namespace std;

const long long INF = (1LL<<60);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    // 1) Matriz de distancias: arranca con INF y 0 en la diagonal
    vector<vector<long long>> dist(N+1, vector<long long>(N+1, INF));
    for (int i = 1; i <= N; ++i) dist[i][i] = 0;

    // 2) Leer aristas (no dirigido). Si tu grafo fuera dirigido, quita la línea simétrica.
    for (int e = 0; e < M; ++e) {
        int u, v; long long w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
        dist[v][u] = min(dist[v][u], w);
    }

    // --- TRACES: imprime la matriz
    auto printMatrix = [&](const string& title){
        cout << "\n" << title << "\n";
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (dist[i][j] >= INF/2) cout << "INF ";
                else cout << dist[i][j] << " ";
            }
            cout << "\n";
        }
    };

    printMatrix("Matriz inicial");

    // 3) Floyd–Warshall: k = intermedio, i = origen, j = destino
    for (int k = 1; k <= N; ++k) {
        cout << "\n=== Usando k = " << k << " como intermedio ===\n";
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (dist[i][k] >= INF/2 || dist[k][j] >= INF/2) continue; // no hay camino via k
                long long candidato = dist[i][k] + dist[k][j];
                if (candidato < dist[i][j]) {
                    cout << "Mejora: dist[" << i << "][" << j << "] "
                         << "pasa de " << (dist[i][j] >= INF/2 ? string("INF") : to_string(dist[i][j]))
                         << " a " << candidato
                         << " via " << i << "->" << k << "->" << j << "\n";
                    dist[i][j] = candidato;
                }
            }
        }
        printMatrix("Despues de k = " + to_string(k));
    }

    cout << "\nMatriz final de distancias mas cortas:\n";
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            if (dist[i][j] >= INF/2) cout << "INF ";
            else cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
