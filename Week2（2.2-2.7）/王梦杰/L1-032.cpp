#include<iostream>
#include<bits/stdc++.h>

using namespace std; 
int main(){
	int n;
	char c;
	cin>>n>>c;
	string s;
	cin.ignore();
	getline(cin,s);
	int len=s.length();
	vector<char> ans(n);
	for(int i=n-1;i>=0;i--){
		if(len-(n-i)>=0){
			ans[i]=s[len-(n-i)];
		}
		else{
			ans[i]=c;
		}
	}
	for(auto bb:ans){
		cout<<bb;
	}
}
