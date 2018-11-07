#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
 vector<int> v(10);//开辟10个长度为int 的数组 ,初始化每个元素值为0；
 vector<int> v1;
 v1.resize(8); // reset the size of the  v1;
 vector<int> v2(100,9); // length=100 and all single number =9
 v[1]=2;
 cout<<v[1]<<endl;
 return 0;
}
