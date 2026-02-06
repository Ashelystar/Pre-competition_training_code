#include <iostream>

using namespace std;

int main(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    cin>>x1>>y1;
    for(int i = 0; i < 3; i++){
        int num;
        cin>>num;
        if(num) y2++;
        else x2++;
    }
    // 如果没有评委认可则一定是对方胜出
    if(x2 == 0){
        cout<<"The winner is b: "<<y1<<" + "<<y2;
        return 0;
    }
    else if(y2 == 0){
        cout<<"The winner is a: "<<x1<<" + "<<x2;
        return 0;
    }
    // 否则才比较观众票数
    else if(x1 > y1){
        cout<<"The winner is a: "<<x1<<" + "<<x2;
        return 0;
    }
    else{
        cout<<"The winner is b: "<<y1<<" + "<<y2;
        return 0;
    }
    return 0;
}
