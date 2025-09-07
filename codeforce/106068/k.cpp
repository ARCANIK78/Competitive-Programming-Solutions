#include <bits/stdc++.h>
using namespace  std;
int main(){
    int n; cin >> n;
    vector<int> conjunto(n);
    for(int i=0; i < n ; i++){
        cin >> conjunto[i];
    }
    
    sort(conjunto.begin(), conjunto.end());
    while (conjunto.size() > 1)
    {
        int x = conjunto.back(); conjunto.pop_back();
        int y = conjunto.back(); conjunto.pop_back();
        int mcd = gcd(x,y);
        conjunto.push_back(mcd);
    }
    
    if(conjunto[0] == 1){
        cout << "Naya" << endl;
    }else{
        cout << "Hassan" << endl;
    }
}
