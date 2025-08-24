#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int res=0;
    for(int i=0;i<n;i++){
        int num; cin >> num;
        res=res^num;
    }
    cout << res << endl;
}   
