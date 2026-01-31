#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    map<ll,map<ll,ll>> mp;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        ll a,b,c;
        scanf("%lld%lld%lld", &a, &b, &c);
        mp[b][1]=a;
        mp[b][2]=c;
    }

    int m;
    scanf("%d", &m);
    for(int i=0;i<m;i++){
        ll q;
        scanf("%lld", &q);
        printf("%lld %lld\n",mp[q][1],mp[q][2]);
    }

    return 0;
}