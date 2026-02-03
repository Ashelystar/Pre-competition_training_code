#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    getline(cin, a);
    getline(cin, b);
    // cout << a <<endl<< b<<endl;
    
    for (int i = 0; i < a.size(); i++){
        bool hasB = false;
        for (int j = 0; j < b.size(); j++){
            if(a[i] == b[j]){
                hasB = true;
                break;
            } 
        }
        if(!hasB){
            cout << a[i];
        } 
    }
    cout << endl;
}
