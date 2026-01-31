#include<iostream>
#include<iomanip>
using namespace std;

int main(){
   float a = 0.01,b=0.00001;
   // 5位有效数字 
   cout << fixed << setprecision(5) << a <<" "<< b << endl; 
   printf("%.5f %.5f\n",a,b);
}
