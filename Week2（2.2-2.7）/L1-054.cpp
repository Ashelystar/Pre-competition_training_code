#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	char c;
	int N;
	cin>>c>>N;
	cin.ignore();
	vector<string> strs;
	while(N--){
		string str;
		getline(cin,str);
		strs.push_back(str);
	}
	bool isDao = true;
	int l = 0;
	int r = strs.size() - 1;
	while(l <= r){
		reverse(strs[r].begin(),strs[r].end());
        // 如果这个是图形是倒对称的，那么它的每一行都应该是回文字符串
		if(strs[l] != strs[r]) isDao = false;
        // 防止同一行被反转两次
        // 不管是不是倒对称，都进行反转处理
		if(l != r) reverse(strs[l].begin(),strs[l].end());
		l++;
		r--;
	}
	if(isDao) cout<<"bu yong dao le"<<endl;
	for(int i = strs.size() - 1; i >= 0; i--){
		for(const char& ch : strs[i]){
			if(ch != ' ') cout<<c;
			else cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}