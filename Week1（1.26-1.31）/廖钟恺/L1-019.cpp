#include <iostream>

using namespace std;

int main(){
    int A,B;
    cin>>A>>B;
    int N;
    cin>>N;
    int countA = 0;
    int countB = 0;
    for(int i = 0; i < N; i++){
        int Ahan,Ahua,Bhan,Bhua;
        cin>>Ahan>>Ahua>>Bhan>>Bhua;
        int sum = Ahan + Bhan;
        if(Ahua == sum && Bhua == sum) continue;
        if(Ahua == sum) countA++;
        if(Bhua == sum) countB++;
        if(countA > A){
            cout<<"A"<<endl<<countB;
            return 0;
        }
        if(countB > B){
            cout<<"B"<<endl<<countA;
            return 0;
        }
    }
    return 0;
}