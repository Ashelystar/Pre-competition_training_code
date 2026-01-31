#include <iostream>
using namespace std;
int main(){
    int numA, numB;//A,B二人的酒量
    int countA=0,countB=0;//A,B两人喝的酒的数量
    int N;
    cin>>numA>>numB>>N;
    int sA,sB,hA,hB;//A,B喊出的数字和划出的数字
    for(int i=1;i<=N;i++){
        cin>>sA>>hA>>sB>>hB;
        if(hA==sA+sB&&hB!=sA+sB){
            countA++;
            if(numA<countA){
                cout<<"A"<<endl<<countB<<endl;
                return 0;
            }
        }
        if(hB==sA+sB&&hA!=sA+sB){
            countB++;
            if(numB<countB){
                cout<<"B"<<endl<<countA<<endl;
                return 0;
            }
        }
    }
    return 0;
}


