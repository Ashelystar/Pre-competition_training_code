#include <string>
#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    string ans;
    for(const char &c : str){
        if(c == '0') ans += "ling ";
        else if(c == '1') ans += "yi ";
        else if(c == '2') ans += "er ";
        else if(c == '3') ans += "san ";
        else if(c == '4') ans += "si ";
        else if(c == '5') ans += "wu ";
        else if(c == '6') ans += "liu ";
        else if(c == '7') ans += "qi ";
        else if(c == '8') ans += "ba ";
        else if(c == '9') ans += "jiu ";
        else if(c == '-') ans += "fu ";
    }
    // 移除最后一个空格
    ans.pop_back();
    cout<<ans;
    return 0;
}