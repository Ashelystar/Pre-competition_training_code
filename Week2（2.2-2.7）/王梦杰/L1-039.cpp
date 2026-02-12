#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	int len=s.length();
	vector<stack<char>> cc(n);
	int j=0;
	//用栈存放 
	for(int i=0;i<n;i++){
		cc[i].push(s[j]);
		j++;
		if(j>=len) break;
		if(i==n-1) i=-1;
	}
	//补全空格 
	if(cc[0].size()>=len/n+1){
		for(int i=0;i<n;i++){
			if(cc[i].size()<len/n+1){
				cc[i].push(' ');
			}
		}
	}
	//输出 
	for(int i=0;i<n;i++){
		while(!cc[i].empty()){
			cout<<cc[i].top();
			cc[i].pop();
		}
		cout<<endl;
	}
	return 0;
}
