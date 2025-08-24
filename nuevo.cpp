#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;
int main(){
    int n, q ;
    string curr = "", attr_name;
    cin >> n >> q;
    cin.ignore();
    for (int i = 0; i < n; i++){
        string line, tag, extract;
        getline(cin, line);
        stringstream ss(line);
        while(getline(ss, extract, ' ')){
            if(extract[0] == '<'){
                if(extract[1] != '/'){
                    tag = extract.substr(1);
                    if(tag[tag.length() -1] == '>'){
                        tag.pop_back();
                    }
                    if(curr.size() > 0){
                        curr += "." + tags;
                    }
                    else{
                        curr = tag;
                    }
                }
                else{
                    tag = extract.substr(2, (extract.find('>') - 2));
                    size_t pos = curr.find("." + tag);
                    if(pos != string::npos){
                        curr = curr.substr(0, pos);
                    }
                    else{
                        curr = "";
                    }
                }
            }
        }
    }
}