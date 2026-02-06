#include <iostream>
#include <string>
using namespace std;

int main(){
    int countG = 0;
    int countP = 0;
    int countL = 0;
    int countT = 0;
    string str;
    cin>>str;
    for(const char& c : str){
        if(c == 'g' || c == 'G') countG++;
        else if(c == 'p' || c == 'P') countP++;
        else if(c == 'l' || c == 'L') countL++;
        else if(c == 't' || c == 'T') countT++;
    }
    string ans;
    while(countG > 0 || countP > 0 || countL > 0 || countT > 0){
        if(countG-- > 0) ans.push_back('G');
        if(countP-- > 0) ans.push_back('P');
        if(countL-- > 0) ans.push_back('L');
        if(countT-- > 0) ans.push_back('T');
    }
    cout<<ans;
    return 0;
}