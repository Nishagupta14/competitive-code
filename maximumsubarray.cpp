/*
Maximum Subarray
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=0;
        int max_sum=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            //current maximum sum is either the current element or currelement +previous element
            curr_sum=max(nums[i],curr_sum+nums[i]);
            //curr_sum is greater than total sum
            max_sum=max(curr_sum,max_sum);
        }
        return max_sum;
    }
};