#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	for(int i=0;i<6;i++)
	{
		s.push(i);
	}
	cout<<s.top()<<endl; //显示栈顶元素 
	cout<<s.size()<<endl;//显示栈顶大小 
	s.pop();// 弹出栈顶元素
	cout<<s.top()<<endl;
	
	return 0; 

}
