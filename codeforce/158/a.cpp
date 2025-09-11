#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    int cont=0;
    vector<int> score(n);
    for(int i=0; i< n; i++) cin >> score[i];
    int tercer_lugar = score[k-1];
    for(int j=0;j <n ; j++){
        if(score[j] >= tercer_lugar && score[j] > 0){
            cont++;
        }
    }
    cout << cont << endl;
}
