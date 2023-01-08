// perform an calculator using switch case:

#include<iostream>
using namespace std;

int main()
{
    rewrite: 
	float a,b;
	char ans;

	cout<<"Enter the number:";
	cin>>a>>b;
	
	cout<<"Enter operation what whould you perform:\n '+' , '-' , '*' , '/':";
	cin>>ans;
	
	switch(ans) // it perform an expression
	{
		case '+': cout<<(a+b)<<endl;
		        break;
		
		case '-': cout<<(a-b)<<endl;
		         break;
	    case '*': cout<<(a*b)<<endl;
	             break;
	    case '/': cout<<(a/b)<<endl;
	      		 break;
	     		  
	    default : cout<<"Invalid"<<endl;
	            goto rewrite;
	}
	return 0;
}
