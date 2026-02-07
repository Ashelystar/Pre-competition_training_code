#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    scanf("%d\n",&n);
    getline(cin,s);

    int m=(s.size()+n-1)/n;//每行的字符数
    while(s.size()<m*n) s+=' ';//补齐空格
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            printf("%c",s[j*n+i]);
        }
        printf("\n");
    }


    return 0;
}