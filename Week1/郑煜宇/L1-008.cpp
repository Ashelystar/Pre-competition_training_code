#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a, b, sum = 0;    cin >> a >> b;
    while (a <= b){
        for (int i = 0; a <= b && i < 5; i++){
            // printf("%5d",a);
            cout << setw(5) << a;
            sum += a;
            a++;
        }
        cout << endl;
    }
    printf("Sum = %d\n",sum);
}
