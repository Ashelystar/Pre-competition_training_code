#include <iostream>

int main(){
    int N;
    int num;
    int countJi = 0;
    int countOu = 0;
    std::cin>>N;
    while(N-- > 0){
        std::cin>>num;
        countJi += num % 2;
        countOu += !(num % 2);
    }
    std::cout<<countJi<<" "<<countOu;
    return 0;
}