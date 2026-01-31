#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 105;

ll a[N], b[N];
int n;

int main(){
    ll CommonMultiple = 1,sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%lld/%lld", &a[i],&b[i]);
        CommonMultiple = CommonMultiple / __gcd(CommonMultiple, b[i]) * b[i];
    }
    for(int i=0;i<n;i++){
        a[i] = a[i] * (CommonMultiple / b[i]);
        sum+=a[i];
        b[i] = CommonMultiple;
    }
    ll gcd = __gcd(sum, CommonMultiple);
    sum/=gcd;
    CommonMultiple/=gcd;
    if(CommonMultiple==1){
        printf("%lld\n", sum);
    }else{
        if(sum>CommonMultiple){
            printf("%lld ", sum/CommonMultiple);
        }
        printf("%lld/%lld\n",sum%CommonMultiple, CommonMultiple);
    }

    return 0;
}