#include <iostream>
using namespace std;
int N,M;
struct student{
    string id;
    int textseatnum,examseatnum;
}studentliat[1005];
//用考生的试机座位号码查找考生的准考证号和考试座位号码
void find(int textseatnum){
    for(int i=0;i<N;i++){
        if(studentliat[i].textseatnum==textseatnum){
            cout<<studentliat[i].id<<" "<<studentliat[i].examseatnum<<endl;
            return;
        }
    }
}
int main(){
    cin>>N;
    //输入N个考生的信息
    for(int i=0;i<N;i++){
        cin>>studentliat[i].id>>studentliat[i].textseatnum>>studentliat[i].examseatnum;
    }
    cin>>M;
    int textseatnum;
    //输入M个查询
    for(int i=0;i<M;i++){
        
        cin>>textseatnum;
        find(textseatnum);
    }
    return 0;
}


