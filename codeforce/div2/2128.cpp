#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i < t; i++){
        int n,c;
        cin >> n  >> c;
        vector<int> arrBasura(n);
        for(int x=0; x < n; x++){
            cin >> arrBasura[x];
        }
        sort(arrBasura.begin(), arrBasura.end());
        int ultim = 0;
        for(int i = 0; i < n; i++){
            if(arrBasura[i] <= c) {
                ultim = arrBasura[i];
            }
            arrBasura[i] = arrBasura[i*2];
        }
        arrBasura.erase(remove(arrBasura.begin(), arrBasura.end(), ultim), arrBasura.end());
        for(auto h : arrBasura){
            cout << h << "-- ";
        }
    }
}


/*


1 = 30
8 = 30
4 = 30
15 = 30
10 = 30

*/


