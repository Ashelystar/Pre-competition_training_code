#include <iostream>
using namespace std;
int main(){
    int num,sum=0,temp=1,line=0;
    char c;
    cin>>num>>c;
    num++;
    while(sum+temp*2<=num){
        line++;
        sum+=temp*2;
        temp+=2;
    }
    temp-=2;
    num-=sum;
    //上半部分
    for(int i=1,j=temp;i<=line&&j>=1;i++,j-=2){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
        for(int k=j;k>=1;k--){
            cout<<c;
        }
        cout<<endl;
    }
    //下半部分
    for(int i=line-1,j=3;i&&j<=temp;i--,j+=2){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
        for(int k=j;k>=1;k--){
            cout<<c;
        }
        cout<<endl;
    }
    cout<<num<<endl;
    return 0;
}