#include<iostream>
#include<string>
using namespace std;
int main() {
	int length;
	string a;
	cin >> length >> a;
	cin.ignore();//输入充填字符后有一个回车要处理
	string word;
	getline(cin, word);//有空格要用getline
	int less = length - word.size();
	if (less > 0) {
		for (int i = 0; i < less; i++) {
			word = a + word;
		}
	}
	else {
		word = word.substr(word.size() - length, word.size());
	}
	cout << word;
}