#include <iostream>
#include <cmath>
using namespace std;
long long N,maxlen=0,start=0;
int main(){
    cin>>N;
    for(int i=2;i<=sqrt(N)+1;i++){
        if(N%i!=0)continue;
        int len=0;
        for(int j=i,k=N;k;j++){
            if(k%j!=0){
                break;
            }
            k/=j;
            len++;
        }
        //更新最大连续因子长度和起始因子
        if(len>maxlen){
            maxlen=len;
            start=i;
        }
    }
    if(maxlen==0){
        //因子只有1和N本身的情况
        cout<<1<<endl<<N<<endl;
    }else{
        //有其他因子的情况的输出
        cout<<maxlen<<endl;
        for(int i=start;i<start+maxlen-1;i++){
            cout<<i<<"*";
        }
        cout<<start+maxlen-1<<endl;
    }
    return 0;
}