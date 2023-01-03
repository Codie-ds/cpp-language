#include<iostream>
using namespace std;

int main()
{
	int n;

    cout<<"Enter any five numbers:";
    cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(int i=0;i<n;i++)
     {
     	cout<<array[i]<<" ";
	 }
	
	cout<<" \n"<<array[3]<<endl;
	
	return 0;
}
