#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;
int* Index;

void read(string s); // 初始化上述两个数组
void print(string s); // 格式打印
int main(){
    string s;    cin >> s;
    read(s);
    print(s);
}
// 判断数字在arr中的位置，若无则返回-1
int idxInArr(int a){
    for (int i = 0; i < arr.size(); i++){
        if (a == arr[i]){
            return i;
        }
    }
    return -1;
}
void read(string s){
    // 初始化arr
    for (int i = 0; i < s.size(); i++){
        if (idxInArr(s[i]-'0') == -1){
            arr.push_back(s[i]-'0');
        }
    }
    std::sort(arr.begin(),arr.end()); // 升序排序
    std::reverse(arr.begin(), arr.end());   
/*
如需自定义排序函数：
    bool compareDesc(int a, int b) {
        return a > b;  // 降序
    }
    std::sort(arr.begin(), arr.end(), compareDesc);
    
也可以使用匿名函数：
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return a > b;
    });
*/
    
    // 初始化index
    Index = new int[s.size()];
    for (int i = 0; i < s.size(); i++){
        int idx = idxInArr(s[i]-'0');
        Index[i] = idx;
    }
}
void print(string s){
    // arr
        cout << "int[] arr = new int[]{";
    for (int i = 0; i < arr.size() - 1; i++) 
        cout << arr[i]<<',';
        cout << arr[arr.size()-1] << "};" << endl;

    // index
        cout << "int[] index = new int[]{";
    for (int i = 0; i < s.size() - 1; i++) 
        cout << Index[i]<<',';
        cout << Index[s.size()-1] << "};" << endl;
    delete[] Index;
}
