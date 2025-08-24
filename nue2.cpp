#include <bits/stdc++.h>
using namespace std;

map<int, vector<int>> grafo;
set<int> arista_unicas;

void dfs(int unico){
    arista_unicas.insert(unico);
    for(auto h : grafo[unico]){
        if(!arista_unicas.count(h)){
            dfs(h);
        }
    }
}

int main(){
    int n, total_estaciones=10; cin >> n;

    for(int i=0; i < n; i++){
        int a,b; 
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    int grup = 0;
    
    for(int i=0; i< total_estaciones; i++){
        if(!arista_unicas.count(i)){
            dfs(i);
            grup++;
        }
    }
    cout << grup << endl;
}



/*
7
0 1
1 2
3 4
5 6
7 8
8 9
7 9


4
*/