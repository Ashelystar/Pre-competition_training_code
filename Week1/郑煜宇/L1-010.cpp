#include<iostream>
using namespace std;
int main(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    // ц╟ещ
    for (int i = 0; i < 3-1; i++){
        for (int j = 0; j < 3-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];    a[j] = a[j+1];    a[j+1] = temp;
            }
        }
    }
    cout << a[0] <<"->"<< a[1] <<"->"<< a[2] << endl;
}
