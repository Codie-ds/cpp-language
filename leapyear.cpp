#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"Enter a year:";
	cin>>a;
	

		if(a%4 == 0)
		{
			cout<<"\n This is a leap year"<<endl;
		}
		else 
		{
			cout<<"\n This  is not a leap year"<<endl;
		}
		return 0;
	}
