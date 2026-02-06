#include<iostream>
#include<set>
#include<queue>
using namespace std;
int findpos(set<int, greater<int>> number, int num) {
	auto it = number.begin();
	int pos = 0;
	while (*it != num) {
		pos++;
		it++;
	}
	return pos;
}
int main() {
	string phone;
	cin >> phone;
	set<int, greater<int>> number;
	for (char temp : phone) {
		number.insert(temp - '0');
	}
	queue<int> two;
	for (char temp : phone) {
		two.push(findpos(number, (int)temp - '0'));
	}
	cout << "int[] arr = new int[]{";
	for (auto it = number.begin(); it != number.end(); it++) {
		cout << *it;
		auto it2 = it;
		if (++it2 != number.end())
			cout << ",";
	}
	cout << "};" << endl << "int[] index = new int[]{";
	while (two.size()) {
		cout << two.front();
		two.pop();
		if (two.size())
			cout << ",";
	}
	cout << "};";
	return 0;
}
