#include <iostream>
using namespace std;
int fact[15],N,S;
int main(){
    cin>>N;
    S=fact[1]=1;
    for(int i=2;i<=N;i++){
        //fact数组记录各个数字的阶乘大小
        fact[i]=fact[i-1]*i;
        S+=fact[i];
    }
    cout<<S<<endl;
    return 0;
}
