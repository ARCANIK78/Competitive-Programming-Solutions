#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>>grafo; //contruir el grafo
set<string>unicos; //contruir los valores unicos

void dfs(string unico){
    unicos.insert(unico);
    for(auto h : grafo[unico]){
        if(!unicos.count(h)){
            dfs(h);
        }
    }
}


int main(){
    int n; cin >> n;
    for(int i=0; i<n;i++){
        string a, b;
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);

    }
    int grupo = 0;

    for(auto j : grafo){
        if(!unicos.count(j.first)){
            dfs(j.first);
            grupo++;
        }
    }
    cout << grupo << endl;
}




/*
6
Luis Ana
Ana Pedro
Carlos Maria
Mario Jose
Maria Jose
Luis Pedro

map< ana - vector<luis - pedro>
map< carlos - vector<maria - >
map< luis - vector<ana - pedro>
map< pedro - vector<ana - luis >
map< maria - vector<carlos - jose >
map< mario - vector<jose - >
map< jose - vector<mario - maria>

set<string> visitado; =()

   persona =  ana
    visitado.cout(persona)


funcion dfs 
    actual = ana
    visitado.insert(actual=ana);
    grafo : ana (luis, pedro);
    if(visitado.cout(luis,pedro))
vuelve hacerlo    
            dfs(luis);
            dfs(pedro);


*/
