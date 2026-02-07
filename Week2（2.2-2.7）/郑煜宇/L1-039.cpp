#include <iostream>
#include <string>
using namespace std;

void init(char**& a, string& s, int N); // 转为古风排版
void print(char** a, string s, int N);
int main(){
    int N;    cin >> N;    cin.ignore();
    string s;    getline(cin, s);
    // cout << s << endl; 
    
    char** a;
    init(a, s, N);
    print(a, s, N);
}
void init(char**& a, string& s, int N){
    // 对齐字符串，使其长度能被N整除
    for (int i = s.size()%N; i!=0 && i < N; i++) 
        s += " "; //
    int cow = s.size() / N; 
    // printf("%d %d\n",s.size(),cow);
    // cout << s << endl; 
    
    // 初始化a
    a = new char*[N];
    for (int i = 0; i < N; i++) a[i] = new char[cow];
    
    // 从右上开始 逐列 填充a
    for (int i = 0; i < cow; i++){
        for (int j = 0; j < N; j++){
            a[j][(cow-1)-i] = s[i*N+j];
        }
    }
}
void print(char** a, string s, int N){
    // 打印
    int cow = s.size() / N;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < cow; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    // 删除a
    for (int i = 0; i < N; i++) delete a[i];
    delete[] a;
}

