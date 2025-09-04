#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S ; 
    cin >> S;
    int N ;
    cin >> N;
    int len = S.size();
    unordered_set<char> vert = {'A','H','I','M','O','T','U','V','W','X','Y'};
    unordered_set<char> hori = {'B','C','D','E','H','I','K','O','X'};

    vector<int> prefv(len+1,0), prefh(len+1,0);
    for(int i =0; i< len; i++){
        prefv[i+1] = prefv[i] + (vert.count(S[i]) ? 1 : 0);
        prefh[i+1] = prefh[i] + (hori.count(S[i]) ? 1 : 0);
    }

    while (N--){
        int x,y;
        cin >> x >> y;
        int menor = min(x,y);
        int mayor = max(x,y);
        int simV = prefv[mayor+1] - prefv[menor];
        int simH = prefh[mayor+1] - prefh[menor];
        if(simH == simV){
            cout << "Simetría igual." << endl;
        }else if(simH > simV){
            cout << "Más simetría horizontal." << endl;
        }else{
            cout << "Más simetría vertical." << endl;
        }
    }
}
