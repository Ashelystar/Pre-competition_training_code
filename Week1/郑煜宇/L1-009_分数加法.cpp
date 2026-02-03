#include <iostream>
#include <cmath>
using namespace std;

#define lli long long int

// 特别注意：gcd算法中需要处理模0的情况
class frac{
// 实战时可以不使用private
private:
    lli up;
    lli down;
    
    // 欧几里得法求公因数
    lli gcd(lli a, lli b){
        if (a==0 || b==0) return 1;  // !! 
        if (a < b){
            lli temp = a; a = b; b = temp;
        }
        lli c = a % b;
        if (c == 0){
            return b;
        } else {
            return gcd(b,c);
        }
    }
public:
    // 冗杂的构造函数（
    frac()
        :up(0),down(1){};
    frac(lli up, lli down)
        :up(up),down(down){};
    frac(const frac& a)
        :up(a.up),down(a.down){};
    
    // 初始化
    void init(){
        // cin >> up;
        // cin.ignore(); // 忽略单个字符"/"
        // cin >> down;
        scanf("%lld/%lld",&up,&down);
        // printf("%d/%d\n",up,down); // 读入测试
    }

    // 分数加法，注意分子为0的情况会让gcd报错
    frac add(frac b){
        lli resUp = up * b.down + b.up * down;
        lli resDown = down * b.down;
        
        lli k = gcd (abs(resUp), resDown);
        return frac(resUp/k , resDown/k);
    }

    // 格式输出，使用if-return语句（guarded-do）
    void print(){
        lli n = up / down;
        lli a = up % down;
        if (n != 0 && a != 0){
            printf("%lld %lld/%lld\n", n, up%down, down);
            return;
        }
        if (n == 0 && a != 0){
            printf("%lld/%lld\n", up%down, down);
            return;
        }
        if (n != 0 && a == 0){
            printf("%lld\n", n);
            return;
        }
        if (n == 0 && a == 0){
            printf("0\n");
            return;
        }
    }

    // 测试gcd算法
    void testGcd(){
        cout << gcd(12,4) << endl;
        cout << gcd(28,6) << endl;
        cout << gcd(0,1) << endl;
    }
};

int main(){
    // 分数初始化
    int N;    cin >> N;
    frac a[N];
    for (int i = 0; i < N; i++){
        a[i].init();
    }
    // a[0].testGcd();

    // 分数求和
    frac sum(a[0]);
    // sum.print();
    for (int i = 1; i < N; i++){
        sum = sum.add(a[i]);
    }
    sum.print();
}
