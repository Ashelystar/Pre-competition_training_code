#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // set数组用于统计0-9每个数字在输入号码中出现的次数
    vector<int> set(10);
    // nums1用于存储输入号码中出现过的数字（按降序排列）
    vector<int> nums1;
    // nums2用于存储每个数字在nums1中的索引位置
    vector<int> nums2(10);
    
    // 读取输入的电话号码字符串
    string str;
    cin>>str;
    
    // 统计输入字符串中每个数字出现的次数
    for(const char&c : str){
        set[c - '0']++;  // 将字符转换为数字并计数
    }
    
    // 计算不重复的数字个数，并建立数字到索引的映射
    int count = 0;
    // 从9到0遍历（降序），确保nums1中数字按降序排列
    for(int i = 9; i >= 0; i--){
        if(set[i] != 0){  // 如果数字i在输入中出现过
            nums1.push_back(i);  // 将数字i加入nums1（自然形成降序）
            nums2[i] = count++;  // 记录数字i在nums1中的索引位置
        }
    }
    
    // 输出arr数组
    cout<<"int[] arr = new int[]{";
    for(int i = 0; i < nums1.size(); i++){
        if(i != 0) cout<<",";
        cout<<nums1[i];
    }
    cout<<"};"<<endl;
    
    // 输出index数组
    cout<<"int[] index = new int[]{";
    for(int i = 0; i < str.size(); i++){
        if(i != 0) cout<<",";
        cout<<nums2[str[i] - '0'];
    }
    cout<<"};"<<endl;
    
    return 0;
}