#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans*=2;
    }
    printf("2^%d = %d\n",n,ans);
    return 0;
}