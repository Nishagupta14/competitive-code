/*Remove Duplicates from Sorted Array
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
*/
#include<bits/stdc++.h>
using namespace std;

    int removeDuplicates(vector<int>& nums) {
          //inplace removal
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]=nums[i]){
                count++;//decide no of steps 
            }
            else{
                nums[i-count]=nums[i];//putting elements in new modified vector
            }

        }
        return n-count;
    }


int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  
    int k=removeDuplicates(v);
    for(int i=0;i<=k;i++){
        cout<<v[i];
    }
}

