#include <string>
#include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    if(str >= "00:00" && str <= "12:00"){
        cout<<"Only "<<str<<".  Too early to Dang.";
        return 0;
    }
    int count = ((str[0] - '0') * 10 + (str[1] - '0')) % 12;
    if(!(str[3] == '0' && str[4] == '0')) count++;
    for(int i = 0; i < count; i++){
        cout<<"Dang";
    }
    return 0;
}