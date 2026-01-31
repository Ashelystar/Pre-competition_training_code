#include <iostream>
#include <string>
using namespace std;
int main(){
    string N;
    cin >> N;
    int count[10] = {0};
    for (char c:N){
        int digit = c-'0';
        count[digit]++;
    }
    for (int i=0; i<10; i++){
        if (count[i]>0){
            cout << i <<":"<< count[i] <<endl;
        }
    }
    return 0;
}