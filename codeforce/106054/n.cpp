#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int minX= +1e9, maxX= -1e9, minY= +1e9, maxY= -1e9;
    for(int i=0; i <n; i++){
        int x,y;
        cin >> x >> y;
        minX = min(x,minX);
        minY = min(y,minY);
        maxX = max(x,maxX);
        maxY = max(y,maxY);
    }
    cout << (2 * (maxX-minX + 2 + maxY-minY+2)) << endl;
}
