#include<iostream>
using namespace std;
void yinyong(int &a)
{
    a=99;
}
void chuandi(int a)
{
 a=99;
}
int main()
{
    int m=0;// ����
    int n=0; // ������ֵ
    yinyong(m);
    chuandi(n);
    cout<<m<<endl;
    cout<<n<<endl;
    return 0;
}
