#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;
int main(){
    int n;
    cin >> n;
    vector<int> vecto(n);
    for(int x=0; x<n;x++){
        cin >> vecto[x];
    }
    reverse(vecto.begin(), vecto.end());
    for(int y : vecto){
        cout << y << " ";
        
    }
}
