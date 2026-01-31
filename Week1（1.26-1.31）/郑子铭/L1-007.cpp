#include <iostream>
using namespace std;
string numlist[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
string num;
int main(){
    cin>>num;
    int i=0;
    //判断是否输入的为负数
    if(num[0]=='-'){
        i++;
        cout<<"fu ";
    }
    for(;i<num.length()-1;i++){
        int digit=num[i]-'0';
        cout<<numlist[digit]<<" ";
    }
    cout<<numlist[num[num.length()-1]-'0']<<endl;
    return 0;
}