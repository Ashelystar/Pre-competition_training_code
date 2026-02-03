#include <iostream>
#include <string>
using namespace std;

// 使用数组，记录题目给出的复杂信息
int weight[17]={
    7,9,10,5,8,
    4,2,1,6,3,
    7,9,10,5,8,
    4,2
};

char checkSum[11]={
    '1','0','X','9','8',
    '7','6','5','4','3',
    '2'
};

//// 创建结构体，用于简化参数传递 ////
struct id{
    string id;
    int sum;
    bool isRight;
};

//// 子函数声明 ////
int getSum(string a);  // 计算校验和
void checkRight(id& a);  // 检查身份证合法性
void print(id* a, int n);  // 输出结果
//// 主函数 ////
int main(){
    int n;    cin >> n;
    id a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].id;
        a[i].sum = getSum(a[i].id);
        checkRight(a[i]);
    }
    print(a,n);
}
//// 编写子函数 ////
int getSum(string a){
    int sum = 0;
    for (int i = 0; i < 17; i++){
        sum += (a[i]-'0') * weight[i];
    }
    return sum%11;
}

void checkRight(id& a){
    if (a.id[18-1] == (checkSum[a.sum])){
        a.isRight = true;
    } else a.isRight = false;

    for (int j = 0; j < 17; j++){
        if (a.id[j]<'0' || a.id[j]>'9'){
            a.isRight = false;
            break;
        }
    }
}

void print(id* a, int n){
    bool isAllRight = true;
    for (int i = 0; i < n; i++){
        if (!a[i].isRight){
            isAllRight = false;
            cout << a[i].id << endl;
        }
    }
    if (isAllRight){
        cout << "All passed" << endl;
    }
}
