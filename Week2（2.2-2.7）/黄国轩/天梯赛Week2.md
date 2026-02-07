# 天梯赛Week2

## L1-032 Left-pad

```C++
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
```

若将`getline(cin, s);`换成`cin>>s;`则当字符串中间出现空格时会出错。

原因是`getline`是读入一整行，而`cin`会在读到空格或换行时结束输入。

注意`scanf`读入第一行时把行末换行符`\n`一起读掉防止干扰读入第二行。