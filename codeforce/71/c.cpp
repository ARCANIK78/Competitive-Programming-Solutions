#include <bits/stdc++.h>
using namespace std;
int main(){
    int N , buenos = 0, malos = 0;
    cin >> N;
    for(int i = 0 ; i < N ;i++){
        int a;
        cin >> a;
        if(a == 1) buenos++;
        else malos++;
    }
    cout << buenos << " - " << malos << endl;
    if(buenos > malos) cout << "YES";
    else cout << "NO";
}
