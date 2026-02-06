#include <string>
#include <iostream>

using namespace std;

int main(){
    int K;
    cin>>K;
    string str;
    cin>>str;
    int count = 0;
    while(str != "End"){
        if(count++ == K){
            cout<<str<<endl;
            count = 0;
        }
        else{
            if(str == "Bu") cout<<"JianDao"<<endl;
            else if(str == "JianDao") cout<<"ChuiZi"<<endl;
            else cout<<"Bu"<<endl;
        }
        cin>>str;
    }
    return 0;
}