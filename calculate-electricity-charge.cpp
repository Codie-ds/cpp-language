#include<iostream>
using namespace std;

class electric
{
    float unit;
    char name[20];
    public:
    void accept()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"No.of unit:";
        cin>>unit;
    }
    void print_bill();
};
void electric::print_bill()
{
    int bill = 0,additional_charge;
    if(unit>=1 && unit<=100)
       bill = unit*0.40;
    else if(unit>100 && unit<=300)
       bill = unit*0.50;
    else if(unit>300)
       bill = unit*0.60;
    bill=bill+500;
       if(bill>250)
         additional_charge =(bill*0.15);
         bill = bill + additional_charge;
        cout<<"\n  bill is"<<bill<<endl; 
        cout<<"Your additional charge is:"<<additional_charge;
       //cout<<"\n Bill = "<<bill<<"\t"<<name<<endl;
}
int main()
{
     electric e;
     int i;
       e.accept();
       e.print_bill();

     return 0;
}
