#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,int> m;// create the map m 键值对 string int
    m["hello"]=2;
    cout<<m["hello"]<<endl; //输出 键值对的数值

    cout<<m["world"]<<endl;// 此时键值对不存在，看看有什么结果 输出0

    m["world"]=3; //创建键值对 world

    m[","]=1;//创建1看看会发生什么

    //迭代输出 键 用 first 获取 值用second获取
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl; //此时输出按照值的大小由小到大排列
    }
    //输出第一个元素 begin
    cout<<m.begin()->first<<" "<<m.begin()->second<<endl;
    // 输出最后一个元素 rbegin
    cout<<m.rbegin()->first<<" "<<m.rbegin()->second<<endl;
    //输出空间大小
    cout<<m.size()<<endl; //大小为3







return 0;
}
