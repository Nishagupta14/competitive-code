/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1*/
#include<bits/stdc++.h>
using namespace std;
int searchhelper(vector<int> &nums,int ele,int low,int high){
        while(high-low>1){
           int mid=(high+low)/2;
          
         if(nums[mid]<ele){
                low=mid+1;
                
            }
            else{
                high=mid;
            }
        }
        if(nums[low]==ele){
            return low;
        }
        else if(nums[high]==ele){
            return high;
        }
        else{
            if(nums[high]>ele && nums[low]<ele){
                return high;
            }
         else if(nums[high]<ele){
             return high+1;
         }
            else
                return low;
            }
            
        
    }
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
       int index= searchhelper(nums,target,0,n-1);
        return index;
    }
};