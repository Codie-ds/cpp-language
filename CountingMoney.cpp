#include<iostream>
using namespace std;

int main(){
	int amt = 0;
	int note = 0;	
	int arr[9]; 

    cout<<"enter the amount:";
    cin>>amt;

   switch(true){
    case 1:
    arr [0]=amt/100;
    cout<<"number of 100 rupees note:"<<arr [0]<<endl;
    arr[1]=amt-(100* arr [0]);
     
    case 2 :
    arr [2]=arr [1]/50;
    cout<<"number of 50 rupees note:"<<arr[2]<<endl;
    arr[3]=arr [1]-(50*arr [2]);
       
    case 3 :
    arr[4]=arr[3]/20;
    cout<<"number of 20 rupees note:"<<arr[4]<<endl;
    arr[5]=arr[3]-(20*arr[4]);
  
    case 4 :
    arr [6]=arr[5]/10;
    cout<<"number of 10 rupees note :"<<arr[6]<<endl;
    arr[7]=arr[5]-(10*arr[6]);

    case 5 :
    arr[8]=arr[7]/1;
    cout<<"number of 1 rupee coin :"<<arr[8]<<endl;
  
 }
    return 0;
 }	

