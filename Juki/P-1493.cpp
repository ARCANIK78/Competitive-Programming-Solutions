#include <bits/stdc++.h>
using namespace std;
int main(){
    int N ;
    cin >> N;
    vector<int> falla;
    for(int i = 0; i < N; i++){
        int a ;
        cin >> a;
        falla.push_back(a);
    }
    int fisrt = falla[0];
    int post = 0;
    int postfalla = 0;
    for(int j = 0 ; j < N ; j++){
        post++;
        if( fisrt <= falla[j]){
            fisrt = falla[j];
        }else{
            if(fisrt == falla[j]){
                postfalla = 0;    
            }else{
                postfalla = post;
            }
            break;
        }
    }
    cout << postfalla << endl;
}
