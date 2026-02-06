#include <iostream>
#include <string>

using namespace std;

int main(){
	string ans;
	string str;
	getline(cin,str);
	int l = 0;
	int r = 0;
	while(r < str.size()){
		if(str[r] != '6'){  // 如果当前字符不是'6'
			// 计算当前连续'6'的数量（r-l）
			if(r - l > 9){  // 如果连续'6'的数量超过9个
				ans += "27";  // 替换为"27"
				ans.push_back(str[r]);  // 添加当前非'6'字符
			}
			else if(r - l > 3){  // 如果连续'6'的数量超过3个但不超过9个
				ans += "9";  // 替换为"9"
				ans.push_back(str[r]);  // 添加当前非'6'字符
			}
			else if(r - l > 0){  // 如果连续'6'的数量在1-3之间
				ans += str.substr(l,r - l);  // 添加原本的'6'字符
				ans.push_back(str[r]);  // 添加当前非'6'字符
			}
			else ans.push_back(str[r]);  // 添加当前非'6'字符
			
			l = r + 1;
		}
		r++;
	}
	// 处理字符串末尾
	if(r - l > 9){
		ans += "27";
	}
	else if(r - l > 3){
		ans += "9";
	}
	else if(r - l > 0){
		ans += str.substr(l,r - l);
	}
	cout<<ans;
	return 0;
}