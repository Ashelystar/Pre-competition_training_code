#include<iostream>
#include<string>
#include<sstream>
using namespace std;
bool ifpos(string num) {
	for (int i = 0; i < num.size(); i++) {
		if (num[i] > '9' || num[i] < '0')
			return false;
	}
	return true;
}
int turnnumber(string num) {
	int sum = 0;
	for (int i = 0; i < num.size(); i++) {
		sum += (int)(num[i] - '0');
		if (i < num.size() - 1)
			sum *= 10;
	}
	return sum;
}
bool iflegal(string num) {
	int temp = turnnumber(num);
	if (ifpos(num) && temp <= 1000 && temp >= 1)
		return true;
	return false;
}
int main() {
	string a;
	getline(cin, a);
	stringstream ss(a);
	string num1, num2;
	ss >> num1;
	num2 = a.substr(num1.size() + 1);
	if (iflegal(num1))
		cout << num1;
	else
		cout << "?";
	cout << " + ";
	if (iflegal(num2))
		cout << num2;
	else
		cout << "?";
	cout << " = ";
	if (iflegal(num1) && iflegal(num2)) {
		cout << turnnumber(num1) + turnnumber(num2);
	}
	else {
		cout << "?";
	}
}