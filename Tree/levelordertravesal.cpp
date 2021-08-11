#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
 */
 class Solution {
public:
    vector<vector<int>> traverse(TreeNode* root){
        if(root == NULL){
            return {};
        }
        // bfs
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> res;
       
        while(!q.empty()){
            int size = q.size();
            vector<int> currLevel;
            while(size--){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
                currLevel.push_back(curr->val);
            }
            if(currLevel.size() != 0){
                res.push_back(currLevel);
            }
        }
        return res;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res = traverse(root);
        return res;
    }
};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    levelOrder(root);
    return 0;
}