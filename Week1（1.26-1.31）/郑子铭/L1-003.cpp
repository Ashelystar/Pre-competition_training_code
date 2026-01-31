#include <iostream>
using namespace std;
int main(){
    int cnt[10]={0};
    string N;
    cin>>N;
    //统计正整数N中各个数字出现的次数
    for(int i=0;i<N.length();i++){
        cnt[N[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        //输出正整数N中各个数字出现的次数
        if(cnt[i]>0){
            cout<<i<<":"<<cnt[i]<<endl;
        }
    }
    return 0;
}
