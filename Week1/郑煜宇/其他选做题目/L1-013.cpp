#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;    cin >> n;
    int fact=1, sum=0;
    for (int i = 1; i <= n; i++){
        fact *= i;
        sum += fact;
    }
    cout << sum << endl;
}
