#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec;
    int a, max, min;
    cin >> a;
    for(int i=0; i < a; i++){
        int val;
        cin >> val;
        vec.push_back(val);
    }
    max = vec[0];
    for(int j = 0; j < a; j++){
        if(max < vec[j]){
            max = vec[j];
        }
    }
    min = vec[0]; // 10
    for(int j = 0; j < a; j++){
        if(min > vec[j]){ // 10 < 20
            min = vec[j];
        }
    }
    cout << "Maximo: " << max << " " << "minimo: " << min;
}