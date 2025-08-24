#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a == 1){
        cout << "one"<< "\n";
    }else if(a == 2){
        cout << "two" <<"\n";
    }
    else if(a == 3){
        cout << "three" <<"\n";
    }
    else if(a == 4){
        cout << "four" <<"\n";
    }
    else if(a == 5){
        cout << "five" <<"\n";
    }
    else if(a == 6){
        cout << "six" <<"\n";
    }
    else if(a == 7){
        cout << "seven" <<"\n";
    }
    else if(a == 8){
        cout << "eight" <<"\n";
    }
    else if(a == 9){
        cout << "nine" <<"\n";
    }
    else if(a > 9){
        cout << "Greater than 9" <<"\n";
    }
  
}
/* con operadores ternarios
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    vector<string> numero{"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a ;
    cout << ((1 <= a and a <=9)? numero[a - 1]: "Greater than 9");
}
*/