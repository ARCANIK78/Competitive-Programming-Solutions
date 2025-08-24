#include <bits/stdc++.h>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    if(A <= 1 and B <= 1){
        cout << ":(";
    }else{
        if(A % 2 == 0) A += 5;
        else A -= 3;
        if(B % 2 == 0) B += 5;
        else B -= 3;
        cout << max(A,B);
    }
    
}