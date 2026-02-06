#include <iostream>

int main(){
    int D;
    std::cin>>D;
    std::cout<<(D + 2 > 7 ? (D + 2) % 7: D + 2);
    return 0;
}