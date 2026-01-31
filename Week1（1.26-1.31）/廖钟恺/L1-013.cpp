#include <iostream>

using namespace std;

int main(){
    int S = 0;
    int N;
    int sum = 1;
    cin>>N;
    for(int i = 1; i <= N; i++){
        sum *= i;
        S += sum;
    }
    cout<<S;
    return 0;
}