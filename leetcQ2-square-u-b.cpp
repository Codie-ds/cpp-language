// square root using binary search

#include<iostream>
using namespace std;

int findsquareroot(int arr[], int num){

    int start = 0;
    int end = num;
    int ans = -1;
    int mid = start+(end-start)/2;

    while(start<=end)
    {
        int square = mid*mid;
        if(square == num){
            return mid;
        }
        if(square > num){
             end = mid-1;
        }
        else { // mid*mid < num
            ans = mid;
            start = mid + 1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main()
{
     int even[36];
     cout<<"The square of 36 is : "<<findsquareroot(even,36)<<endl;
}
