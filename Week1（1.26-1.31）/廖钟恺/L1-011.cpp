#include <string>
#include <iostream>

using namespace std;

int main(){
    string str;
    string delStr;
    
    // 读取第一行
    getline(cin, str);
    // 读取第二行
    getline(cin, delStr);
    
    string ans;
    for(const char &c : str){
        if(delStr.find(c) == string::npos){
            ans.push_back(c);
        }
    }
    cout << ans << endl;
    return 0;
}