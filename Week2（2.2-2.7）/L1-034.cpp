#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> tags(1001);
    while(N--){
        int K;
        cin>>K;
        while(K--){
            int tag;
            cin>>tag;
            tags[tag]++;
        }
    }
    int ans = 0;
    int AnsIndex = -1;
    for(int i = 1000; i>= 0; i--){
        if(ans < tags[i]){
            ans = tags[i];
            AnsIndex = i;
        }
    }
    cout<<AnsIndex<<" "<<ans;
    return 0;
}