#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s<<endl;
    cout<<s.length()<<endl;
    // 下面是获取一行包括空格的代码
    getchar();//接受回车
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.length()<<endl;//此时长度包括空格
    // 取字符
    // 首先是从字符到结束函数substr(5)
    string s1=s.substr(5);
    cout<<s1<<endl;
    //然后是 从第几个向后书几个
    string s2=s.substr(5,3);
    cout<<s2<<endl;
    return 0;
}
