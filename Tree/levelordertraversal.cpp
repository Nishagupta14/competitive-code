template<typename T>
class Treenode{
    public:
    int val;
    Treenode<T>*left;
    Treenode<T>*right;
    TreeNode(T val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
}
vector<int>  getLevelOrder(TreeNode<int> *root){
    vector<int>res;
    if(root==NULL){
        return res;
    }
    queue<TreeNode<int>*> q;
    q.push(root);
     while(!q.empty()){
    int nodecount=q.size();
         while(nodecount!=0){
        TreeNode<int>* curr=q.front();
        q.pop();
        res.push_back(curr->val);
            if(curr->left!=NULL){
                q.push(curr->left);
       
        }
         if(curr->right!=NULL){
                q.push(curr->right);
       
        }
        
        nodecount--;
    }
}
return res;
}