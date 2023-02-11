#include<iostream>
#include<queue> // it means first in frist out
using namespace std;

int main()
{
    queue<string>s;

    s.push("Dev");    // matalab line jo phela lag ta hai vo phela ata hai;
    s.push("Kamal");
    s.push("Shah");

    cout<<"Size before pop ->"<<s.size()<<endl;
    cout<<"Frist element ->"<<s.front()<<endl;
    s.pop();
    cout<<"Frist element ->"<<s.front()<<endl;

    cout<<"size after pop ->"<<s.size()<<endl;
  
    return 0;
}