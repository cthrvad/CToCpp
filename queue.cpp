#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    for(int i=0;i<6;i++)
    {
        q.push(i);
    }
    cout<<q.front()<<"  "<<q.back()<<endl;//访问队列中的首位元素和队伍末尾元素
    cout<<q.size()<<endl;
    q.pop();//移除队首元素
    cout<<q.front()<<endl;
    return 0;
}