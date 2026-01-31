#include <iostream>
#include<iomanip>
using namespace std;
struct num{
    int numerator,denominator;
}temp,sum;
int N;
//计算分子分母公约数
int getGCD(int a,int b){
    if(b==0) return a;
    return getGCD(b,a%b);
}
//计算两个分数的和
num add(num a,num b){
    num c;
    c.numerator=a.numerator*b.denominator+b.numerator*a.denominator;
    c.denominator=a.denominator*b.denominator;
    int gcd=getGCD(c.numerator,c.denominator);
    if(gcd){
        c.numerator/=gcd;
        c.denominator/=gcd;
    }
    return c;
}
int main(){
    cin>>N;
    char ch;
    cin>>sum.numerator>>ch>>sum.denominator;
    for(int i=1;i<N;i++){
        cin>>temp.numerator>>ch>>temp.denominator;
        sum=add(sum,temp);
    }
    if(sum.numerator==0){
        cout<<"0"<<endl;
        return 0;
    }
    int number=sum.numerator/sum.denominator;
    //判断是否有整数部分
    if(number){
        cout<<number;
        sum.numerator%=sum.denominator;
        if(sum.numerator){
            cout<<" ";
        }
    }
    //判断是否有分数部分
    if(sum.numerator){
        cout<<sum.numerator<<"/"<<sum.denominator;
    }
    cout<<endl;
    return 0;
}
