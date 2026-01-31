#include<bits/stdc++.h>
using namespace std;
char a[10005],b[10005];
bool vis[300];
int main(){
    char ch;
    while(ch=getchar()!=EOF){
        if(ch=='\n') break;
        a[strlen(a)]=ch;
    }
    while(ch=getchar()!=EOF){
        if(ch=='\n') break;
        b[strlen(b)]=ch;
    }

    for(int i=0;i<strlen(b);i++) vis[(int)b[i]]=1;
    for(int i=0;i<strlen(a);i++){
        if(!vis[(int)a[i]]) printf("%c",a[i]);
    }
    return 0;
}