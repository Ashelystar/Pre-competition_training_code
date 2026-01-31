#include <iostream>
#include <cmath>
using namespace std;
int N;
char c;
int main(){
    cin>>N>>c;
    for(int i=1;i<=(int)round(N/2.0);i++){
        for(int j=1;j<=N;j++){
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}


