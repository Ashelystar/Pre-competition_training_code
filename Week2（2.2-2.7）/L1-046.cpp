#include <iostream>

using namespace std;

int main(){
	int x;
	cin>>x;
	long long num = 1;
	int n = 1;
    // 找到第一个大于等于x的光棍数
	while(num < x){
		num = 10 * num + 1;
		n++;
	}
    // 模拟除法
	while(num % x){
		cout<<num / x;
		num %= x;
		num = 10 * num + 1;
		n++;
	}
	cout<<num / x;
	cout<<" "<<n;
	return 0;
}