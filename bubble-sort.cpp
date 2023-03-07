#include<iostream>
using namespace std;

int bubblesort(int arr[],int n)
{ 
    for(int i=0; i<n; i++){
        //for round 1 to n-1
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int print(int a[],int n){

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

int main()
{
    int a[1000],size;
    
    cout<<"Enter the size of element:";
    cin>>size;

    cout<<"Enter the element:"<<endl;
    for(int i=0; i<size; i++){
        cin>>a[i];
    }

    cout<<"after bubble sort:"<<endl;

    bubblesort(a,size);
    print(a,size);

    return 0;
}