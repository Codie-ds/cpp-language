#include<iostream>
using namespace std;

int main()
{
    int a = 4 , b = 6 , temp;

    cout<<"Before swapping."<<endl;
    cout<<"a = "<<a<<"b = "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"\n After swapping."<<endl;
    cout<<"a = "<<a<<"b = "<<b<<endl;

    return 0;


}
