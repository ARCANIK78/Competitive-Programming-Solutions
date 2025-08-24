#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> postulantes;
    for(int i=0; i< N; i++){
        int a;
        cin >> a;
        postulantes.push_back(a);
    }
    int Q, X;
    string result = "";
    cin >> Q >> X;
    for(auto j : postulantes){
        if(X < j){ 
            Q -= 1;
            if(Q == 0){
                result = "NO POSTULES";
                break;
            }
        }else{
            result = "POSTULA";
        }
    }
    cout << result << endl;
}