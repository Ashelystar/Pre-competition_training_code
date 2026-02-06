#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    cin>>N;
	cin.ignore();
    while(N--){
        string str;
        getline(cin,str);
        int firstIndex = str.find(',');
        int secondIndex = str.size() - 1;
        if(firstIndex < 3 || str.substr(firstIndex - 3,3) != "ong" || str.substr(secondIndex - 3,3) != "ong"){
            cout<<"Skipped"<<endl;
            continue;
        }
        int spaceCount = 0;
        int spaceIndex = -1;
        for(int i = secondIndex; i >= 0; i--){
            if(str[i] == ' ') spaceCount++;
            if(spaceCount == 3){
                spaceIndex = i;
                break;
            }
        }
        cout<<str.substr(0,spaceIndex)<<" qiao ben zhong."<<endl;
    }
    return 0;
}
