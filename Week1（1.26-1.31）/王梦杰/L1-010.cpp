#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums(3);
    for(int i=0;i<3;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int first=true;
    for(auto num:nums){
        if(first){
            cout<<num;
            first=false; 
        }
        else{
            cout<<"->"<<num;
        }
    }
    cout<<endl;
}