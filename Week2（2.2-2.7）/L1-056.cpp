#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int N;
	cin>>N;
	vector<string> names(N);
	vector<int> scores(N);
	int sum = 0;
	for(int i = 0; i < N; i++){
		string name;
		int score;
		cin>>name>>score;
		names[i] = name;
		scores[i] = score;
		sum += score;
	}
	sum /= N * 2;
	int ansIndex = -1;
	int diff = 1000;
	for(int i = 0; i < N; i++){
		int newDiff = abs(scores[i] - sum);
		if(newDiff < diff){
			diff = newDiff;
			ansIndex = i;
		}
	}
	cout<<sum<<" "<<names[ansIndex];
	return 0;
}