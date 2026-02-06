#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num == 1 || num == 0) return false;
    for(int i = 2; (long long)i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){
    int N;
    cin>>N;
    int num;
    int nums[10] = {0};
    while(N--){
        cin>>num;
        if(isPrime(num)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}