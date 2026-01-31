#include <iostream>
#include<string>
using namespace std;
string ss,s;
int main(){
    getline(cin,ss);
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        char c=s[i];
        //index用于记录在ss中找到的c的位置
        int index=ss.find(c);
        while(index!=-1){
            ss.erase(index,1);
            index=ss.find(c);
        }
    }
    cout<<ss<<endl;
    return 0;
}