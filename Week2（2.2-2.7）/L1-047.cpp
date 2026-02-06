#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    cin>>N;
    while(N--){
        string name;
        int breath;
        int rate;
        cin>>name>>breath>>rate;
        if(!(breath >= 15 && breath <= 20) || !(rate >= 50 && rate <= 70)){
            cout<<name<<endl;
        }
    }
    return 0;
}