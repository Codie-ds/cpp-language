#include<iostream>
using namespace std;

class student{

    public:
    int values;
    char name;

    student(){
        cout <<"Constructor called" <<endl;
    }
};

int main()
{
    student dev;
    cout << "size of -> " <<sizeof(dev) <<endl;


    return 0;
}