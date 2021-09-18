vector<int> reverseLevelOrder(Node *root)
{
    // code here
    

    queue<Node*>q;
    vector<int>res;
  
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        res.push_back(curr->data);
        q.pop();
    
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        if(curr->left!=NULL){
            q.push(curr->left);
       
    }
    }
   int i=0;
   int j=res.size()-1;
   while(i<j){
       swap(res[i],res[j]);
       i++;
       j--;
   }
  
    return res;
}