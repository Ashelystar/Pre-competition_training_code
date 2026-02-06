#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N;
    cin>>N;
    cout<<fixed<<setprecision(2);
    while(N--){
        char sex;
        double height;
        cin>>sex>>height;
        if(sex == 'M') cout<<height / 1.09<<endl;
        else cout<<height * 1.09<<endl;
    }
    return 0;
}