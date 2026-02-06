#include <iostream>

int main(){
    int x;
    int y;
    std::cin>>x>>y;
    //O(0,0),A(x,y),B(100,100),OA = (x,y),OB = (100,100),S =1/2 * OA × OB = (x - y) * 50
    std::cout<<(x - y) * 50;
    return 0;
}
