#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,int> m;// create the map m ��ֵ�� string int
    m["hello"]=2;
    cout<<m["hello"]<<endl; //��� ��ֵ�Ե���ֵ

    cout<<m["world"]<<endl;// ��ʱ��ֵ�Բ����ڣ�������ʲô��� ���0

    m["world"]=3; //������ֵ�� world

    m[","]=1;//����1�����ᷢ��ʲô

    //������� �� �� first ��ȡ ֵ��second��ȡ
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl; //��ʱ�������ֵ�Ĵ�С��С��������
    }
    //�����һ��Ԫ�� begin
    cout<<m.begin()->first<<" "<<m.begin()->second<<endl;
    // ������һ��Ԫ�� rbegin
    cout<<m.rbegin()->first<<" "<<m.rbegin()->second<<endl;
    //����ռ��С
    cout<<m.size()<<endl; //��СΪ3







return 0;
}
