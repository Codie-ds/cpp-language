#include<iostream>
using namespace std;

int main()
{
    increadible:
    int i;
    
    cout<<"Enter the number:";
    cin>>i;
    
    if(i<18)
      goto increadible;
    
	else
      cout<<"Now you are elegible for voting";

    return 0;
}
