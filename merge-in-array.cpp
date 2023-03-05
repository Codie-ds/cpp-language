#include<iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i = 0, j = 0, k = 0;
    while(i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else { 
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    //copy first array ka element ko
    while(i<n) {
        arr3[k++] = arr1[i++];
    }

    ///copy kardo second array k remaining element ko
    while(j<m) {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n){
    for(int i=0; i<n; i++)
    {
        cout<<" "<<ans[i];
    }
    cout<<endl;
}
int main()
{
    int arr1[100],arr2[100],arr3[200],size1,size2; //Making it user-defined 

    cout<<"Enter how many element:"<<endl;
    cin>>size1;

    cout<<"Enter the element in arr1:"<<endl;
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }
    cout<<"Enter how many element:"<<endl;
    cin>>size2;
    cout<<"Enter the element in arr2:"<<endl;
    for(int j=0; j<size2; j++){
        cin>>arr2[j];
    }
  
    merge(arr1,size1,arr2,size2,arr3);
    int ans = size1 + size2;
    print(arr3,ans);

    return 0;
}