#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    bool flag1=1,flag2=1;//标记是否为正整数
    cin>>str1>>str2;
    
    string wa;
    if(cin>>wa) flag2=0;//读取多余输入，说明第二个不是正整数
    
    int num1=0,num2=0;
    for(int i=0;i<str1.size();i++){
        if(str1[i]>='0'&&str1[i]<='9'){
            num1=num1*10+(str1[i]-'0');
        }
        else{
            flag1=0;
            break;
        }
    }
    for(int i=0;i<str2.size();i++){
        if(str2[i]>='0'&&str2[i]<='9'){
            num2=num2*10+(str2[i]-'0');
        }
        else{
            flag2=0;
            break;
        }
    }
    if(num1>1000||num1<1) flag1=0;
    if(num2>1000||num2<1) flag2=0;

    if(flag1) printf("%d ",num1);
    else printf("? ");
    printf("+ ");
    if(flag2) printf("%d = ",num2);
    else printf("? = ");
    if(flag1&&flag2) printf("%d\n",num1+num2);
    else printf("?\n");

    return 0;
}