#include <cstdio>

int main(){
    int price;
    int discount;
    scanf("%d %d",&price,&discount);
    printf("%.2f",price * (double)discount / 10);
    return 0;
}