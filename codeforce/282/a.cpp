#include <bits/stdc++.h>
using namespace std;
int main(){
    int N ,cont=0;
    cin >> N;
    for(int i=0; i < N;i++){
        string contador ;
        cin >> contador;
        if(contador == "X++" or contador == "++X"){
            cont++;
        }else{
            cont--;
        }
    }
    cout << cont << endl;
}
