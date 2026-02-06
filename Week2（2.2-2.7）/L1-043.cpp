#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// 将时间字符串转换为分钟数
int stringToInt(string &time){
    return ((time[0] - '0') * 10 + (time[1] - '0')) * 60 + (time[3] - '0') * 10 + (time[4] - '0');
}

int main(){
    int N;
    cin>>N;
    while(N--){
        int ID;
        char key;
        string time;
        int count = 0;
        int readTime = 0;
        unordered_map<int,int> book;
        cin>>ID>>key>>time;
        while(ID != 0){
            if(key == 'S'){
                book[ID] = stringToInt(time);
            }
            else{
                if(book.contains(ID)){
                    readTime += stringToInt(time) - book[ID];
                    count++;
                    book.erase(ID);
                }
            }
            cin>>ID>>key>>time;
        }
        if(count == 0) cout<<"0 0"<<endl;
        else cout<<count<<" "<<(readTime + count / 2) / count<<endl;
    }
    return 0;
}