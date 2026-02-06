#include <iostream>
#include <string>

using namespace std;

int main(){
    string A;
    string B;
    int count = 0;
    string str;
    cin>>str;
    while(str != "."){
        count++;
        if(count == 2) A = str;
        else if(count == 14) B = str;
        cin>>str;
    }
    if(!A.empty() && !B.empty()) cout<<A<<" and "<<B<<" are inviting you to dinner...";
    else if(!A.empty() && B.empty()) cout<<A<<" is the only one for you...";
    else cout<<"Momo... No one is for you ...";
    return 0;
}