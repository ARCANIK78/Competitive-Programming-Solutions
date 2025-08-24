#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0; i <10; i++){
        if(i == 2){
            continue;
        }
        if(i == 6){
            break;
        }
        cout << i << " 0";
    }

}