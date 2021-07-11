/*108. Convert Sorted Array to Binary Search Tree
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class solution{
    TreeNode* buildbst(int start,int end,vector<int>& nums){
        if(start>end){
            return NULL;
        }
        int mid=(start+end)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        TreeNode->left=buildbst(start,mid-1,nums);
        TreeNode->right=buildbst(mid+1,end,nums);
        return root;
    }
    public:
    TreeNode* sortedArrayToBST(vector<int>& nums){
        int n=nums.size();
        return buildbst(0,n-1,nums);
    }

};
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
 
  
    TNode *root = sortedArrayToBST(arr, 0, n-1);
  
    //rest not written
 
    return 0;
}
 