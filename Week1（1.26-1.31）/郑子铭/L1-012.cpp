#include<iostream>
using namespace std;
int main(){
    int n,ans=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        ans*=2;
    }
    cout<<"2^"<<n<<" = "<<ans<<endl;
    return 0;
}