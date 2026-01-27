#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b){
        if(a > c){
            if(b > c){
                cout << c << "->" << b << "->" << a;
            }
            else{
                cout << b << "->" << c << "->" << a;
            }
        }
        else{
            cout << b << "->" << a << "->" << c;
        }
    }
    else{
        if(b > c){
            if(a > c){
                cout << c << "->" << a << "->" << b;
            }
            else{
                cout << a << "->" << c << "->" << b;
            }
        }
        else{
            cout << a << "->" << b << "->" << c;
        }
    }
    return 0;
}