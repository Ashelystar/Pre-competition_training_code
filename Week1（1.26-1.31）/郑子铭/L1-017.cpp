#include <iostream>
#include<iomanip>
using namespace std;
double w=1.0;
string N;
int cnt=0,len;
int main(){
    cin>>N;
    //判断N是否为负数
    if(N[0]=='-'){
        w*=1.5;
        N=N.substr(1);
    }
    len=N.length();
    //判断N是否为偶数
    if((N[len-1]-'0')%2==0){
        w*=2.0;
    }
    //统计N中2的个数
    for(int i=0;i<len;i++){
        if(N[i]=='2'){
            cnt++;
        }
    }
    double ans=(cnt*100.0/len)*w;
    cout<<fixed<<setprecision(2)<<ans<<"%"<<endl;
    return 0;
}


