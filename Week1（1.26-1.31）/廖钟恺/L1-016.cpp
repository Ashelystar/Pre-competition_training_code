#include <string>
#include <iostream>
#include <vector>

using namespace std;

// 验证身份证号是否合法
bool isValid(string str){
    int sum = 0;
    vector<int> nums = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    for(int i = 0; i < 17; i++){
        if(!(str[i] >= '0' && str[i] <= '9')) return false;
        sum += nums[i] * (str[i] - '0');
    }
    vector<char> M = {'1','0','X','9','8','7','6','5','4','3','2'};
    return str[17] == M[sum % 11];
}

int main(){
    int N;
    cin>>N;
    int count = 0;
    for(int i = 0; i < N; i++){
        string str;
        cin>>str;
        if(isValid(str)){
            count++;
        }
        else{
            cout<<str<<endl;
        }
    }
    // 如果都合法
    if(count == N){
        cout<<"All passed";
    }
    return 0;
}