#include <cstdio>

int main(){
    int A;
    int B;
    scanf("%d %d",&A,&B);
    if(B == 0){
        printf("%d/%d=Error",A,B);
        return 0;
    }
    float ans = A / (float)B;
    if(B < 0) printf("%d/(%d)=%.2f",A,B,ans);
    else printf("%d/%d=%.2f",A,B,ans);
    return 0;
}