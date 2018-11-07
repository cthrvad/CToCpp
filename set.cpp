#include<iostream>
#include<set>
using namespace std;
int main()
{
 set<int> s;//set 函数中的没有重复的数字 且是从大到小排列
 s.insert(1);
 cout<<*(s.begin())<<endl;
 for(int i=0;i<6;i++)
 {
        s.insert(i);
 }
 for(auto it=s.begin(); it!=s.end(); it++)
 {
     cout<<*it<<endl;
 }
 cout<<(s.find(2)!=s.end())<<endl;
 cout<<(s.find(10)!=s.end())<<endl;
 cout<<s.erase(1)<<endl;//从数据中擦除1这个元素
 cout<<(s.find(1)!=s.end())<<endl;//逻辑表达式 输出0
 return 0;
 }


