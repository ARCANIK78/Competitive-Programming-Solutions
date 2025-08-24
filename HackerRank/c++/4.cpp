#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    vector<string> numero{"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(a;a<=b;a++){
        if(a <= 9){
            cout << numero[a-1] << "\n";
        }else{
            if(a % 2 == 0){
                cout << "even" << "\n";
            }else{
                cout << "odd" << "\n";
            }
        }
    }
}
