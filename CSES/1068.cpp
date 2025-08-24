#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    cout << n << endl;
    do
    {
        if(n == 1){
            break;
        }else if((n % 2) == 0){
                n = n / 2;
                cout << n << endl;
        }else{
            n = n * 3 +1;
            cout << n << endl;
        }
    } while (n != 1);
    
}
