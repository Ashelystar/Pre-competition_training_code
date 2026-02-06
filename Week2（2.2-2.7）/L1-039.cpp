#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int N;
	cin>>N;
	cin.ignore();
	string str;
	getline(cin,str);
	int len = str.size();
    // 向上取整
    //int line = len / N + (len % N ? 1 : 0);
	int line = (len + N - 1) / N;
	int p = 0;
	vector<string> ans(N,string(line,' '));
	for(int j = line - 1; j >= 0; j--){
		for(int i = 0; i < N; i++){
			ans[i][j] = str[p++];
			if(p == len) break;
		}
	}
	for(const string& s : ans){
		cout<<s<<endl;
	}
	return 0;
}