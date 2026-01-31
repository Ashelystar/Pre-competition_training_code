#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll factor[100005];
ll ans_len,ans_start;
int main(){
    ll n;
    scanf("%lld", &n);

    int cnt=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            factor[++cnt]=i;
            if(i*i!=n) factor[++cnt]=n/i;
        }
    }
    factor[++cnt]=n;

    sort(factor+1,factor+cnt+1);

    for(int i=1;i<=cnt;i++){
        ll tmp=factor[i],cou=1;
        while(tmp<=n){
            if(cou>ans_len){
                ans_len=cou;
                ans_start=factor[i];
            }
            tmp*=(factor[i]+cou);
            cou++;
            if(tmp>n||n%tmp!=0) break;
        }
    }

    printf("%lld\n", ans_len);
    for(ll i=ans_start;i<=ans_start+ans_len-1;i++){
        printf("%lld", i);
        if(i<ans_start+ans_len-1) printf("*");
    }

    return 0;
}