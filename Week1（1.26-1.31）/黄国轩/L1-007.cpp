#include<bits/stdc++.h>
using namespace std;

map<char,string> mp={
    {'-',"fu"},
    {'0',"ling"},
    {'1',"yi"},
    {'2',"er"},
    {'3',"san"},
    {'4',"si"},
    {'5',"wu"},
    {'6',"liu"},
    {'7',"qi"},
    {'8',"ba"},
    {'9',"jiu"}
};

int main(){
    string str;
    cin>>str;
    for(unsigned int i=0;i<str.size();i++){
        if(i) printf(" ");
        cout<<mp[str[i]];
    }

    return 0;
}