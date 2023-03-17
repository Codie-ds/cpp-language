#include<iostream>
using namespace std;

void selectionsort(int a[],int n){

    for(int i=0; i<n; i++){
       int MinIndex = i;
       for(int j=i+1; j<n; j++){
           if(a[j] < a[MinIndex]){
               MinIndex = j;
           }
       }
       swap(a[MinIndex],a[i]);
    }
}
void print(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}

int main()
{
    int a[1000],size;

    cout<<"Enter how many element:";
    cin>>size;

    cout<<"Enter the element:"<<endl;
    for(int i=0; i<size; i++){
         cin>>a[i];
    }

    cout<<"Doing selection sort:"<<endl;

    selectionsort(a,size);
    print(a,size);

    return 0;
}