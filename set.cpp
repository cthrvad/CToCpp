#include<iostream>
#include<set>
using namespace std;
int main()
{
 set<int> s;//set �����е�û���ظ������� ���ǴӴ�С����
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
 cout<<s.erase(1)<<endl;//�������в���1���Ԫ��
 cout<<(s.find(1)!=s.end())<<endl;//�߼����ʽ ���0
 return 0;
 }


