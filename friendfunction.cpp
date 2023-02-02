#include<iostream>
using namespace std;

class xyz;
class abc
{
    public:
    int a,b;
    public:
    void setvalue()
    {
        a = 25;
    }
    friend void max(abc a1,xyz x1);
};
class xyz
{
    public:
    int b;
    public:
    void setvalue()
    {
        b = 30;
    }
    friend void max(abc,xyz);
};
void max(abc a1,xyz x1)
{
    if(a1.a>x1.b)
    {
        cout<<"\n A is greater";
    }
    else
    {
        cout<<"\n B is greater";
    }
}
int main()
{
    abc a2;
    a2.setvalue();
    xyz x3;
    x3.setvalue();
    max(a2,x3);
}
