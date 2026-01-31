#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N;
    char c;
    cin >> N >>c;

    int used = 0;
    int level = 0;

    for (level = 1; ;level++){
        int need = 2*level*level-1;
        if (need>N){
            level--;
            used = 2*level*level-1;
            break;
        }
    }

    for (int i =level;i>=1;i--){
        for (int j=0;j < level-i;j++){
            cout << " ";
        }
        for (int j = 0; j<2*i-1;j++){
            cout << c;
        }
        cout << endl;
    }
    for (int i = 2; i<=level; i++){
        for  (int j=0; j<level-i;j++){
            cout << " ";
        }
        for  (int j=0; j<2*i-1; j++){
            cout << c;
        }
        cout << endl;
    }
    cout << N - used <<endl;
    return 0;
}