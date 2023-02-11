#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v(5,2);
     
    cout<<"Print v "<<endl;
    for(int i:v)
    {
        cout<<" "<<i;
    }cout<<endl;

    v.push_back(1);
    cout<<"Capacity of vector "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    cout<<"size of vector "<<v.size()<<endl;

    v.push_back(4);
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    cout<<"size of vector "<<v.size()<<endl;

    cout<<"print seventh index element ->"<<v.at(7)<<endl;
    
    cout<<"Before element:"<<endl;
    for(int i:v)
    {
        cout<<" "<<i;
    }cout<<endl;
    cout<<"After element:"<<endl;
    v.pop_back();
    for(int i:v)
    {
        cout<<" "<<i;
    }cout<<endl;
    
    cout<<"print sixth index element ->"<<v.at(6)<<endl;
    cout<<"Empty or not ->"<<v.empty()<<endl;

    cout<<"Before erase ->"<<v.size()<<endl;
    v.erase(v.begin(),v.begin()+2);
    cout<<"After erase ->"<<v.size()<<endl;

    for(int i:v)
    {
        cout<<" "<<i;
    }cout<<endl;
    
    return 0;
}