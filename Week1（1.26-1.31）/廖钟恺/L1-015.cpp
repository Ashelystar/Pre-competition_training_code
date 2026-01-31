#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    char c;
    cin>>N>>c;
    // (N + 1) / 2 实现向上取整
    // N / 2 实现向下取整
    for(int i = 0; i < (N + 1) / 2; i++){
        cout<<string(N,c)<<endl;
    }
    return 0;
}