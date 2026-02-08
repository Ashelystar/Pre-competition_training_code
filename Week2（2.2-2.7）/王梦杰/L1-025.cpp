#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getnum(string s){
	int x=0;
	for(int i=0;i<s.length();i++){
		x=x*10+s[i]-'0';
	}
	return x;
}
int main(){
	string s1,s2;
	cin>>s1;
	cin.get();//ÎüÊÕµô¿Õ¸ñ 
	getline(cin,s2);
	bool isnum1=true,isnum2=true;
	for(int i=0;i<s1.length();i++){
		if(s1[i]<'0'||s1[i]>'9'){
			isnum1=false;
			break;
		}
	}
	for(int i=0;i<s2.length();i++){
		if(s2[i]<'0'||s2[i]>'9'){
			isnum2=false;
			break;
		}
	}
	
	int sum;
	if(isnum1==1&&isnum2==1&&getnum(s1)<=1000&&getnum(s1)>=1&&getnum(s2)>=1&&getnum(s2)<=1000){
		sum=getnum(s1)+getnum(s2);
		cout<<s1<<" + "<<s2<<" = "<<sum<<endl;
	}
	else{
		if(isnum1==0||getnum(s1)<=0||getnum(s1)>1000) s1="?";
	    if(isnum2==0||getnum(s2)<=0||getnum(s2)>1000) s2="?";
		cout<<s1<<" + "<<s2<<" = "<<"?"<<endl;
	}
}
