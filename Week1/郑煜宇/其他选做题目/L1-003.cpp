#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;    cin >> n;
    // Í³¼Æ
    int a[10] = {};
    for (int i = 0; i < n.size(); i++){
        int num = n[i] - '0';
        a[num]++;
    }
    // Êä³ö
    for (int i = 0; i < 10; i++){
        if(a[i]) printf("%d:%d\n",i,a[i]);
    }
}
