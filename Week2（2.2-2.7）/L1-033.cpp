#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int diff(int y){
    unordered_set<int> set;
    if(y < 1000) set.insert(0);
    while(y != 0){
        int num = y % 10;
        set.insert(num);
        y /= 10;
    }
    return set.size();
}
int main(){
    int y;
    int n;
    cin>>y>>n;
    int x = 0;
    while(true){
        if(diff(y) == n) break;
        y++;
        x++;
    }
    string str = to_string(y);
    cout<<x<<" "<<string(4 - str.size(),'0')<<str;
}