#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
    int nn=n;
    while(n--){
        ans*=2;
    }
    cout<<"2^"<<nn<<" = "<<ans<<endl;
    return 0;
}   