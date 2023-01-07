#include<iostream>
using namespace std;

int main()
{
    int i =1;
    while(i<=10)
    {
        if(i==5)
        {
            continue;
        }
        cout<<"\n"<<i;
        i++;
    }
    return 0;
}