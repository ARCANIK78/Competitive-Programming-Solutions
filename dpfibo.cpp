#include <bits/stdc++.h>
using namespace std;
int fibo[100];
int calfibo(int n){
    if(fibo[n]!=-1){
        return fibo[n];
    }else{
        fibo[n] = calfibo(n-2) + calfibo(n-1);
        cout << "n " << n << " "<< n-2 << " " << n-1 << endl ;
        return fibo[n];
    }
};
int main(){
    for(int i=0; i < 100; i++){
        fibo[i] = -1;
    }
    fibo[0] = 1;
    fibo[1] = 1;
    cout << "fibo = " << calfibo(9) << endl; 
}
