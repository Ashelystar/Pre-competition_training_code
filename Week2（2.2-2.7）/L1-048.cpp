#include <iostream>
#include <vector>

using namespace std;

int main(){
	int Ra;
	int Ca;
	int Rb;
	int Cb;
	cin>>Ra>>Ca;
	vector<vector<int>> nums1(Ra,vector<int>(Ca));
	for(int i = 0; i < Ra; i++){
		for(int j = 0; j < Ca; j++){
			cin>>nums1[i][j];
		}
	}
	cin>>Rb>>Cb;
	vector<vector<int>> nums2(Rb,vector<int>(Cb));
	for(int i = 0; i < Rb; i++){
		for(int j = 0; j < Cb; j++){
			cin>>nums2[i][j];
		}
	}
	if(Ca != Rb){
		cout<<"Error: "<<Ca<<" != "<<Rb;
		return 0;
	}
	cout<<Ra<<" "<<Cb<<endl;
	for(int i = 0; i < Ra; i++){
		bool isFirst = true;
		for(int x = 0; x < Cb; x++){
			int sum = 0;
			for(int j = 0; j < Rb; j++){
				sum += nums1[i][j] * nums2[j][x];
			}
			if(isFirst){
				cout<<sum;
				isFirst = !isFirst;
			}
			else cout<<" "<<sum;
		}
		cout<<endl;
	}
	return 0;
}