#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string str;
    cin>>str;
    int len = str.size();
    double fu = 1;
    double ou = 1;
    if(str[0] == '-'){
        len--;
        fu = 1.5;
    }
    if((str.back() - '0') % 2 == 0){
        ou = 2;
    }
    int count = 0;
    for(const char &c : str){
        if(c == '2') count++;
    }
    cout << fixed << setprecision(2);
    cout<<fu * ou * count / len * 100<<"%";
    return 0;
}