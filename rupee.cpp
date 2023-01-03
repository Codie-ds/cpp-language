#include<iostream>
using namespace std;

int main(){
	int amt = 0;
	int note = 0;
	char arr[9] = {"x","y","z","k","p","q","r","s","w"};
    cout<<"enter the amount:"<<endl;
    cin>>amt;

switch(true){
    case 1:
    y=amt/100;
    cout<<"number of 100 rupees note:"<<y<<endl;
    x=amt-(100*y);
     
    case 2 :
    z=x/50;
    cout<<"number of 50 rupees note:"<<z<<endl;
    k=x-(50*z);
       
    case 3 :
    p=k/20;
    cout<<"number of 20 rupees note:"<<p<<endl;
    q=k-(20*p);
  
    case 4 :
    r=q/10;
    cout<<"number of 10 rupees note :"<<r<<endl;
    s=q-(10*r);

    case 5 :
    w=s/1;
    cout<<"number of 1 rupee coin :"<<w<<endl;
  
 }
    return 0;
 }	
}
