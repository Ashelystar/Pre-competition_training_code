#include <iostream>
#include <string>

int main(){
    std::string num;
    std::cin>>num;
    int count[10] = {0};
    for(int i = 0; i < num.size(); i++){
        count[num[i] - '0']++;
    }
    for(int i = 0; i < 10; i++){
        if(count[i] != 0){
            std::cout<<i<<":"<<count[i]<<std::endl;
        }
    }
    return 0;
}