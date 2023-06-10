#include<iostream>
using namespace std;
#include<vector>
int n = 3;

class Solution {
    private:
        int solve(int nums[], int& ans, int index) {
            //base case
            if(index >= n) {
                ans = nums[ans];
                return ans;
            }

            for(int j = index; j<n; j++){
                swap(nums[index], nums[j]);
                solve(nums, ans, index+1);
                //backtrack
                swap(nums[index], nums[j]);
            }
            return ans;
        }
public:
         int permute(int nums) {
         int ans;
         int index = 0;
         solve(nums, ans, index);
         return ans;
    }
};

int main()
{
     
    Solution s1;
    int nums[3] = {1,2,3};
    s1.permute(nums);


    return 0;
}