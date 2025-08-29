#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int x=0; x < a;x++){
        for(int j =0; j < a;j++){
            if(j == x){
                cout << "@";
            }else{
                cout << " ";
            }
            if(j+x==a-1){
                cout << "@"; 
            }else{
                cout << "";
            }
        }
        cout << "\n";
    }
}

/*
0 1 2 3 
1 1
2   2 
3     3
*/