#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,tmp=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        tmp*=i;
        ans+=tmp;
    }
    printf("%d\n",ans);
    return 0;
}