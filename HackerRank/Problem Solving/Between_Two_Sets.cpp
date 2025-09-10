#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while (b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int lcm(int a, int b){
    return (a * b) / gcd(a,b);
}
int getTotalX(vector<int> a, vector<int>b){
    int mcm_a = a[0];
    for(int i = 1; i < a.size(); i++){
        mcm_a = lcm(mcm_a, a[i]);
    }
    int mcd_b = b[0];
    for(int j = 1; j< b.size(); j++){
        mcd_b = gcd(mcd_b, b[j]);
    }
    int count = 0;
    for(int x = mcm_a; x <= mcd_b; x += mcm_a){
        if(mcd_b % x == 0) count++;
    }
    return count;
};
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for(int i=0; i < n ;i++){
        int en; cin >> en ; a.push_back(en);
    } 
    for(int j=0; j < m ;j++){
        int en; cin >> en; b.push_back(en);
    }
    cout << getTotalX(a,b) << endl;
}
