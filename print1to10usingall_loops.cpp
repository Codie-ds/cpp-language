#include<iostream>
using namespace std;

int main()
{
    int a=1;
    cout<<"Print 1 to 10 using while loop"<<endl;
    while(a<=10)
    {
        cout<<" "<<a;
        a++;
    }
    cout<<endl;
    a = 1;
    cout<<endl;
    cout<<"Print 1 to 10 using do-while loop"<<endl;
    do
    {
    	cout<<" "<<a;
    	a++;
	}while(a<=10);
	cout<<endl;
	cout<<"Print 1 to 10 using for loop"<<endl;
	for(a=1;a<=10;a++)
	{
		cout<<" "<<a;
	}
   return 0;
}
