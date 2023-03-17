#include<iostream>
using namespace std;

bool ispresent(int arr[][4], int target, int row, int col){

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}
//to print row wise sum
void printsum(int arr[][4], int row, int col){
    
    for(int row=0; row<4; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum = sum + arr[row][col];
        }
        cout<<"  "<<sum;
    }cout<<endl;
}

int largestrowsum(int arr[][4], int row, int col) {

    int maxi = 0;
    int rowIndex = -1;

    for(int row=0; row<3; row++){
    int sum = 0;
    for(int col=0; col<4; col++){
        sum = sum + arr[row][col];
    }
    if(sum > maxi) {
        maxi = sum;
        rowIndex = row;
    }
  }

 cout<<"The maximum sum is "<< maxi <<endl;
 return rowIndex;
}
int main()
{
    //create 2 d array
    int arr[3][4]; 
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
      //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    /*// taking input -> row wise
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

    // taking input -> col wise
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[j][i];
        }
    }*/
 
    //print
   // for(int i=0; i<4; i++)
   // {
   //     for(int j=0; j<3; j++)
   //     {
   //         cout<<arr[j][i]<<" ";
   //     }
   //     cout<<endl;
   // }
    cout<<"Enter the element ->"<<endl;

   for(int i=0; i<3; i++)
    {
    for(int j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
    }

for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}
/*cout<<"Enter the element to search ->"<<endl;
int target;
cin>>target;

if(ispresent(arr,target,3,4)) {
    cout<<"Element found"<<endl;
}
else {
    cout<<"Element not found "<<endl;
}
    printsum(arr,3,4);*/
  
    cout<<"Max row at index ->"<<largestrowsum(arr,3,4)<<endl;
    return 0;
}