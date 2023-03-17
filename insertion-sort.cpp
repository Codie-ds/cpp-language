#include<iostream>
using namespace std;

int main()
{
    int a[100],size;

    cout<<"Enter how many element:";
    cin>>size;

    cout<<"Enter the element:"<<endl;
    for(int i=0; i<size; i++){
-        cin>>a[i];
    }
    
    for(int i=0; i<size; i++){
        int temp = a[i];
        int j=i-1;
        for(; j>=0; j++){
            if(a[j] > temp){
                //shift
                a[j+1] = a[j];
            }
            else {
                break;
            }
        }
        a[j+1] = temp;
    }
    size++;
    for(int i=0; i<size; i++){
        cout<<a[i] <<" ";
    }
    cout<<endl;

    return 0;
}