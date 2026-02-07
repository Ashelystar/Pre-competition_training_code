#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,len;
    char ch;
    string s;

    scanf("%d %c\n",&N,&ch);//读取第一行
    getline(cin, s);//读取第二行
    len=s.size();

    if(len>=N){
        cout<<s.substr(len-N,N)<<"\n";
    }
    else{
        while(s.size()<N){
            s=ch+s;
        }
        cout<<s<<"\n";
    }

    return 0;
}