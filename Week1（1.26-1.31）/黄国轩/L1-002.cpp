#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char ch;
    scanf("%d %c ",&n,&ch);
    
    int cnt = 0;
    if(n>=1) {
        cnt++;
        n--;
    }
    
    while(n>=((cnt+1)*2-1)*2){
        cnt++;
        n -= ((cnt*2-1)*2);
    }

    for(int i=cnt;i>=2;i--){
        for(int j=1;j<=cnt-i;j++) printf(" ");
        for(int k=1;k<=(i*2-1);k++) printf("%c",ch);
        printf("\n");
    }
    for(int i=1;i<=cnt;i++){
        for(int j=1;j<=cnt-i;j++) printf(" ");
        for(int k=1;k<=(i*2-1);k++) printf("%c",ch);
        printf("\n");
    }
    printf("%d\n",n);

    return 0;
}