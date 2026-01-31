#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,sum=0;
    scanf("%d%d", &A, &B);
    for(int i=A,cnt=0;i<=B;i++){
        printf("%5d", i);
        sum+=i;
        cnt++;
        if(cnt%5==0) printf("\n");
    }
    if((B-A+1)%5!=0) printf("\n");
    printf("Sum = %d",sum);
    return 0;
}