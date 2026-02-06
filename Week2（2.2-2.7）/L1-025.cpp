#include <iostream>
#include <string>
using namespace std;

// 判断字符串是否为[1,1000]的正整数
boolisZheng(const string& str){
    for(const char& c : str){
        if(!(c >= '0' && c <= '9')) return false;
    }
    if(!(str.size() <= 3 && str != "0"|| str.size() == 4 && str == "1000")) return false;
    return true;
}

int main(){
    string str;
    getline(cin, str);
    
    // 查找空格位置，处理无空格的情况
    int spaceIndex = str.find(' ');
    string A, B;
    A = str.substr(0, spaceIndex);
    B = str.substr(spaceIndex + 1);

    // 存储判断结果
    bool aIsNum = isZheng(A);
    bool bIsNum = isZheng(B);

    if(aIsNum && bIsNum){
        int sum = stoi(A) + stoi(B);
        cout<<A<<" + "<<B<<" = "<<sum<<endl;
    }
    else if(!aIsNum && bIsNum){
        cout<<"? + "<<B<<" = ?"<<endl;
    }
    else if(aIsNum && !bIsNum){
        cout<<A<<" + ? = ?"<<endl;
    }
    else{
        cout<<"? + ? = ?"<<endl;
    }

    return 0;
}