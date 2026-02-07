#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;    cin >> n;
    char c;    cin >> c;  cin.ignore(); // ³Ôµô»Ø³µ·û
    string s;    getline(cin, s);
    // cout << s << endl;
    
    // ´¦Àí×Ö·û´®(ÇÐ³ý / Ìí¼Ó)
    int len = s.size();
    
    if (len >= n){
        s = s.substr(len-n,n);
        cout << s << endl;
    } else{
        for (; s.size()<n; ) s = c+s;
        cout << s << endl;
    }
}
