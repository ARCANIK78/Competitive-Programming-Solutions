#include <bits/stdc++.h>
using namespace std;
int comb[100][100];
void llenartablacombinatoriahasta(int n){
    for(int i=0; i<=n; i++){
        comb[i][0] = comb[i][i] = 1;
        for(int k=1; k <i;k++){
            comb[i][k] = comb[i-1][k] + comb[i-1][k-1];
        }
    }
}
int main(){
    llenartablacombinatoriahasta(10);
    cout << "c(5,2) = " << comb[5][2] << endl;
    cout << "c(10,3) = " << comb[10][3]<< endl;
}
