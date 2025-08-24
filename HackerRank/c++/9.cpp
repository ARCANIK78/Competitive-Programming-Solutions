#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q; 
    vector<vector<int>>vectorr(n);
    for(int x=0; x< n; x++){
        int tamano;
        cin >> tamano;
        vectorr[x].resize(tamano);
        for(int y=0; y <tamano;y++){
            cin >> vectorr[x][y];
        }
    }
    int i,j;
    for(int x=0; x < q;x++){
        cin >> i >> j;
        cout << vectorr[i][j] << endl;
    }
}
/*
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

5 10
5 1 2 3 4 5 
3 6 5 33 
8 6 9 4 4 2 5 7 8 
10 4 6 7 2 4 6 5 4 7 7 
2 324 100
0 1
0 1
1 1
1 1
2 1
2 1
3 1
3 1
4 1
4 0
*/
