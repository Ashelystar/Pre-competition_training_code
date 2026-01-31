#include <iostream>
#include<iomanip>
using namespace std;
int A,B,sum=0;
int main(){
    cin>>A>>B;
    int count=0;
    for(int i=A;i<=B;i++){
        cout<<setw(5)<<i;
        sum+=i;
        if(++count==5){
            cout<<endl;
            count=0;
        }
    }
    if(count){
        cout<<endl;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}
