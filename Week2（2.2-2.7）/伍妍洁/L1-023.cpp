#include<iostream>
#include<string>
using namespace std;
int main() {
	string word;
	getline(cin, word);
	int g = 0, p = 0, l = 0, t = 0;
	int max = 0;
	for (char& temp : word) {
		if (temp <= 'z' && temp >= 'a') {
			temp = temp + 'A' - 'a';
		}
		switch (temp)
		{
		case 'G': {
			g++;
			break;
		}
		case 'P': {
			p++;
			break;
		}
		case 'L': {
			l++;
			break;
		}
		case 'T': {
			t++;
			break;
		}
		default:
			break;
		}
	}
	while (g > 0 || p > 0 || l > 0 || t > 0) {
		if (g > 0) {
			cout << "G";
			g--;
		}
		if (p > 0) {
			cout << "P";
			p--;
		}
		if (l > 0) {
			cout << "L";
			l--;
		}
		if (t > 0) {
			cout << "T";
			t--;
		}
	}
}