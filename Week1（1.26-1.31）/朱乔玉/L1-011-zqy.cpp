#include <bits/stdc++.h>
using namespace std;

int main(){
    string A, B;
    getline(cin, A);   //getline 输入整行（包括空格）
    getline(cin, B);
    for(int i = 0; i < B.size(); i++){
        char ch = B[i];
        //pos 用于记录在A中找到的ch(B[i])的位置
        int pos = A.find(ch);
        while(pos != -1){
            A.erase(pos, 1);
            pos = A.find(ch);
        }
    }
    cout << A << endl;
    return 0;
}