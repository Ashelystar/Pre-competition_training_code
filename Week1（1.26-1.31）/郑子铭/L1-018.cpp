#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main(){
    int hour,minute;
    char c;
    cin>>hour>>c>>minute;
    //直接求出分钟数
    int ti=hour*60+minute;
    if(ti<=60*12){
        //分钟数少于60*12即是在午夜00:00到中午12:00期间，不敲钟
        cout<<"Only ";
        cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minute;
        cout<<".  Too early to Dang."<<endl;
    }else{
        //减去12:00之前的分钟数
        ti-=60*12;
        //计算敲钟次数
        int cnt=ceil(ti/60.0);
        for(int i=1;i<=cnt;i++){
            cout<<"Dang";
        }
        cout<<endl;
    }
    return 0;
}


