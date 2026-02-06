#include <iostream>

using namespace std;

int main(){
    int count = 1;
    int num;
    while(cin>>num){
        if(num == 250) break;
        count++;
    }
    cout<<count;
    return 0;
}