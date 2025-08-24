#include   <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    long long t, con=0;
    cin >> n >> t;
    for(int i=0; i<n;i++){
        int a;
        cin >> a;
        if(a < t){
            if(con < t){
                con += a;
            }else{
                break;
            }
        }else{
            break;            
        }
    }
    cout << con << endl;
}

/*
0 > 17 = 0

2 > 17 = 2
3 > 17 = 5
5 > 17 = 10
7 > 17 = 17
11 > 17 = 28
*/