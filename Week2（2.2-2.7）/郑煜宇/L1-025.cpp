#include <iostream>
#include <string>
using namespace std;

int toInt(string a); // 可使用std::stoi(str)
bool check(string a);
void print(string a, string b);
int main(){
    string a,b;
    
    // b 可能是一个含空格的字符串？
    // cin >> a >> b;
    cin >> a;
    cin.ignore();    // 吃掉空格
    getline(cin, b);
    
    print(a,b);
}
// str to int
int toInt(string a){
    int res = 0;
    for (int i = 0; i < a.size(); i++){
        res *= 10;
        res += a[i]-'0';
    }
    return res;
}

// 检查合法性
bool check(string a){
    bool res = true;
    for (int i = 0; i < a.size(); i++){
        if (a[i]>'9' || a[i]<'0'){
            res = false;
            break;
        }
    }
    // 避免非正整数进行toInt （用||熔断）
    if (!res \
        || toInt(a)<1 || toInt(a)>1000)
            res = false;
    return res;
}

// 打印结果
void print(string a, string b){
    // 卫语句
    if (check(a) && check(b)){
        int A = toInt(a), B = toInt(b);
        printf("%d + %d = %d\n",A,B,A+B);
        return;
    }
    if (check(a) && !check(b)){
        int A = toInt(a);
        printf("%d + ? = ?\n",A);
        return;
    }
    if (!check(a) && check(b)){
        int B = toInt(b);
        printf("? + %d = ?\n",B);
        return;
    }
    if (!check(a) && !check(b)){
        printf("? + ? = ?\n");
        return;
    }
}
