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
    // �����ǻ�ȡһ�а����ո�Ĵ���
    getchar();//���ܻس�
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.length()<<endl;//��ʱ���Ȱ����ո�
    // ȡ�ַ�
    // �����Ǵ��ַ�����������substr(5)
    string s1=s.substr(5);
    cout<<s1<<endl;
    //Ȼ���� �ӵڼ�������鼸��
    string s2=s.substr(5,3);
    cout<<s2<<endl;
    return 0;
}
