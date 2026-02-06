#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    char c;
    cin>>N>>c;
    string str;
    cin.ignore();
    getline(cin,str);
    int len = str.size();
    // 若原始字符串更短：生成(N-len)个填充字符c，拼接原始字符串后输出
    if(len <= N) cout<<string(N - len,c)<<str;
    // 若原始字符串更长：截取最后N个字符输出
    else cout<<str.substr(len - N);
    return 0;
}
