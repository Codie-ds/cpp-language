// Find first and last position of an element in sorted array

#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key){
    int start = 0, end= n-1;
    int ans = -1;
    int mid = start+(end-start)/2;
 
    while(start<=end){

        if(arr[mid] == key){
            ans = mid;
            end = mid + 1;
        }
        else if(key > arr[mid]){ // go write wala part
            start = mid + 1;
        }
        else { // key < arr[mid]
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key){
    int start = 0, end = n-1;
    int ans = -1;
    int mid = start+(end-start)/2;
 
    while(start<=end){

        if(arr[mid] == key){
            ans = mid;
            start = mid - 1;
        }
        else if(key > arr[mid]){ // go write wala part
            start = mid + 1;
        }
        else { // key < arr[mid]
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){

    int even[5] = {1,2,3,3,5};

    cout<<"First occerence of 3 is :"<<firstocc(even,5,3)<<endl;
    cout<<"First occerence of 3 is :"<<lastocc(even,5,3)<<endl;

    return 0;
}