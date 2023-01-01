#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout<<"Enter any number between one to seven :";
	cin>>a;
	
	if(a==1){
		cout<<"Sunday";
	}
	else if(a==2){
		cout<<"Monday";
	}
	else if(a==3){
		cout<<"Tuesday";
	}
	else if(a==4){
		cout<<"Wednesday";
	}
	else if(a==5){
		cout<<"Thursday";
	}
	else if(a==6){
		cout<<"Friday";
	}
	else if(a==7){
		cout<<"Saturday";
	}
	else {
		cout<<"Enter valid number";
	}
	return 0;
}
