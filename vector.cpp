#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>a(5,1);
    vector<int>last(a); //copy a to last

    cout<<"print last"<<endl;
    for(int i:last){
        cout<<" "<<i;
    }
    cout<<"\nSize ->"<<v.capacity()<<endl; // give capacity of the vactor
 
    v.push_back(1); // it insert data or element at the end of the vector
    cout<<"Size ->"<<v.capacity()<<endl;

    v.push_back(2); // it insert data or element at the end of the vector
    cout<<"Size ->"<<v.capacity()<<endl;

    v.push_back(3); // it insert data or element at the end of the vector
    cout<<"Capacity is ->"<<v.capacity()<<endl;
    cout<<"Size ->"<<v.size()<<endl; // it show size of the vector

    cout<<"front ->"<<v.front()<<endl; // it show the first element 
    cout<<"back ->"<<v.back()<<endl; // it show the last element 

    cout<<"Before pop"<<endl; 
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_front(); // delete the end of the element
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();  // it clear the size 
    cout<<"After clear size "<<v.size()<<endl;

    return 0;
}