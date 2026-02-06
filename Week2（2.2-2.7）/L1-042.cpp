#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    cout<<str.substr(6)<<"-"<<str.substr(0,5);
    return 0;
}