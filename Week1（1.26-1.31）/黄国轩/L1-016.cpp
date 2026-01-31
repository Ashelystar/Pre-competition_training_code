#include<bits/stdc++.h>
using namespace std;
int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
int main(){
    int n;
    string str;
    bool flag=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cin>>str;
        int sum=0;
        for(int j=0;j<17;j++){
            if(!(str[j]>='0'&&str[j]<='9')){
                cout<<str<<endl;
                flag=1;
                sum=-1;
                break;
            }
            sum+=weight[j]*(str[j]-'0');
        }        
        if(sum!=-1&&M[sum%11]!=str[17]){
            cout<<str<<endl;
            flag=1;
        }
    }
    if(!flag) cout<<"All passed"<<endl; 

    return 0;
}