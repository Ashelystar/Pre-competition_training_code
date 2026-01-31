#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int A,B;
    cin>>A>>B;
    int sum = 0;
    int count = 0;
    for(int i = A; i <= B; i++){
        sum += i;
        cout<<setw(5)<<i;
        count++;
        // 每输出5个数字后换行
        if(count == 5){
            cout<<endl;
            count = 0;
        }
    }
    // 如果最后一行不足5个数字，也需要换行
    if(count != 0) cout<<endl;
    cout<<"Sum = "<<sum;
    return 0;
}