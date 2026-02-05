#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.ignore();
	string word;
	getline(cin, word);
	string* type = new string[n];
	for (int i = 0; i < word.size(); i += n) {
		for (int j = 0; j < n; j++) {
			if (i + j < word.size())
				type[j] += word[i + j];
			else
				type[j] += " ";
		}
	}
	for (int i = 0; i < n; i++) {
		reverse(type[i].begin(), type[i].end());
		cout << type[i] << endl;
	}

}