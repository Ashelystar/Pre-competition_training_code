#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "I Love GPLT";
    for(const char &c : str){
        cout<<c<<endl;
    }
    return 0;
}