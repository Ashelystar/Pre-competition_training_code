#include <iostream>
using namespace std;
int w[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2},N;
char ztoM[15]={'1','0','X','9','8','7','6','5','4','3','2'};
string s;
int main(){
    cin>>N;
    //count用来记录不正常的号码数量
    int count=0;
    for(int i=0;i<N;i++){
        cin>>s;
        int sum=0,j;
        for(j=0;j<17;j++){
            //前17个位出现不是数字的情况时跳出循环
            if(!isdigit(s[j])){
                break;
            }
            sum+=w[j]*(s[j]-'0');
        }
        //符合条件就不输出
        if(j==17&&ztoM[sum%11]==s[17]){
            continue;
        }
        cout<<s<<endl;
        count++;
    }
    if(count==0){
        cout<<"All passed"<<endl;
    }
    return 0;
}


