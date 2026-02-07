#include <iostream>
#include <string>
using namespace std;

bool judge(int x, int n); // x 是否有 n 个不同的数字
int main(){
    int y,n;    cin >> y >> n;
    for (int i = 0; ; i++){
        int x = y+i;
        if (judge(x,n)){ 
            printf("%d %04d\n",i,x);
            break;
        }
    }
}
bool inArr(int a, int* arr){
    for (int i = 0; i < 4; i++){
        if (a == arr[i]) return true;
    }
    return false;
}
bool judge(int x, int n){
    // 判断 x 有几位数字不同
    string s = std::to_string(x); // 也可以手动提取 x 中各位上的数字
    for (; s.size()<4;) s = '0' + s; // s 应为四位数
    int count = 0;
    int arr[4] = {-1,-1,-1,-1}; // 去重存储年份 x 中的数字
    for (int i = 0; i < 4; i++){
        if (!inArr(s[i]-'0', arr)){
            arr[count] = s[i]-'0';
            count++;
        }
    }
    if (count==n) return true;
    else return false;
}
