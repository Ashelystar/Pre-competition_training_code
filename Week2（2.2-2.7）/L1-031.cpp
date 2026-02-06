#include <iostream>
using namespace std;

int main(){
    int N = 0;
    cin>>N;
    while(N--){
        int H;
        int W;
        cin>>H>>W;
        float stdW = (H - 100) * 1.8;
        if(abs(stdW - W) < 0.1 * stdW) cout<<"You are wan mei!"<<endl;
        else if(stdW > W) cout<<"You are tai shou le!"<<endl;
        else cout<<"You are tai pang le!"<<endl;
    }
    return 0;
}