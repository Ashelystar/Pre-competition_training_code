#include <iostream>
#include <string>
#include <cmath>

// 考虑一个三角形的高为x，易得一个三角形所需符号数量为x²
// 一个沙漏所需符号数量为2x²-1 <= N，即x <= sqrt((N + 1) / 2.0)
// 令t = x - 1,从-t到t循环

int main(){
    int N;
    char c;
    std::cin>>N>>c;
    int t = (int)sqrt((N + 1) / 2.0) - 1;
    for(int i = -t; i <= t; i++){
        std::cout<<std::string(t - abs(i),' ')<<std::string(abs(i) * 2 + 1,c)<<std::endl;
    }
    std::cout<<N - 2 * pow(t + 1,2) + 1;
}