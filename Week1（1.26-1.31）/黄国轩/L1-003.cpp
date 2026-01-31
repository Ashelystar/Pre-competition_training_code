#include<bits/stdc++.h>
using namespace std;
int num[20];
int main(){
	string str;
	cin>>str;
	for(int i=0;i<str.size();i++){
		num[str[i]-'0']++;
	}
	for(int i=0;i<=9;i++){
		if(num[i]){
			printf("%d:%d\n",i,num[i]);
		}
	}
	return 0;
}