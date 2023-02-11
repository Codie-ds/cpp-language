#include<iostream>
#include<stack> //Last in first out
using namespace std;

int main()
{
    stack<string>s;

    s.push("Dev");   // matalab last me jo paper rakh ta hai wo phela ata hai;
    s.push("Kamal");
    s.push("Shah");

    cout<<"Top element ->"<<s.top()<<endl;
    s.pop();
    cout<<"Top element ->"<<s.top()<<endl;

    cout<<"size of element ->"<<s.size()<<endl; 

    cout<<"Empty or not ->"<<s.empty()<<endl;

    return 0;
}