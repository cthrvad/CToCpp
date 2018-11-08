//
// Created by CTHRVAD on 2018/11/8.
// This code is for CToC__
// source: NO
//
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    bitset<5> b("11");//5个二进制位
    /*
     * 其他的初始化的方式
     * bitset<5> b; 不设置数值 即都为零
     * bitset<5> b(u); u为unsigned int 如果u为1 则初始化为10000
     * bitset<5> b(s); s为字符串 如“1101” ->为 “11010”
     * bitset<5> b(s,pos,n); s为字符串 从c[pos]开始向后推n位
     * */
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<endl;
    }
    cout<<endl<<b.any();//b中存在为1的二进制位吗？
    cout<<endl<<b.none(); //b中不存在1吗?
    cout<<endl<<b.count();//b 中1的数目
    cout<<endl<<b.size();//b的size
    cout<<endl<<b.test(2);// 判断 下标为2的地方是否为1
    b.set(4);// make the mark value which is 4 to 1
    b.reset(); // reset all the place 0
    b.reset(3);// The value of the position in which the index is 3 is 0
    b.flip(); // invert all the binaries bit by bit
    unsigned  long a=b.to_ulong();//convert to unsinged long type
    return 0;
}
