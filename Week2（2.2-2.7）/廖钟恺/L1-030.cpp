#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<string> boys;
    vector<string> girls;
    vector<int> rank;
    while(N--){
        int sex;
        string name;
        cin>>sex>>name;
        if(sex) boys.push_back(name);
        else girls.push_back(name);
        rank.push_back(sex);
    }
    int pBoy = 0;
    int pGirl = 0;
    for(int i = 0; i < rank.size() / 2; i++){
        if(rank[i]) cout<<boys[pBoy]<<" "<<girls[girls.size() - ++pBoy];
        else cout<<girls[pGirl]<<" "<<boys[boys.size() - ++pGirl];
        cout<<endl;
    }
    return 0;
}
