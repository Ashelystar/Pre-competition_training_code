#include <iostream>
#include<iomanip>
#include<map>
using namespace std;
map<int,int> m;
int main(){
    int N,K,M,num,ans[10005],cnt=0; //ans数组存放帅到没朋友的人的编号，cnt记录帅到没朋友的人的个数
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>K;
        for(int j=1;j<=K;j++){
            cin>>num;
            if(K>1){
                m[num]++;
            }
        }
    }
    cin>>M;
    for(int i=1;i<=M;i++){
        cin>>num;
        if(m.count(num)>0){
            continue;
        }
        ans[cnt++]=num;
        m[num]=1;
    }
    //处理没有帅到没朋友的人的情况
    if(cnt==0){
        cout<<"No one is handsome"<<endl;
        return 0;
    }
    //处理有帅到没朋友的人的情况
    cout<<setfill('0')<<setw(5)<<ans[0];
    for(int i=1;i<cnt;i++){
        cout<<" "<<setfill('0')<<setw(5)<<ans[i];
    }
    return 0;
}


