#include <bits/stdc++.h>
using namespace std;
int main(){
   int n; cin >> n;
        vector<int> vec(32,0);
        for(int i=0;i < n ; i++){
            int num; cin >> num;
            for(int j = 0; j<32; j++){
                if((num &(1 << j))!=0){
                    vec[j]++;
                }
            }
        }
        for(int i=0; i<n; i++){
            int numero = 0;
            for(int j=0; j<32; j++){
                if((vec[j]>0)){
                    numero+=(1<<j);
                    vec[j]--;
                }
            }
            cout << numero;
            if(i!=n-1)cout << " ";
        }
        cout << endl;
}
