
   /* Time Complexity: O(N + M)
    Space Complexity: O(N + M)
    
    Where N is the total number of nodes and  is total number of edges
*/

int makeGraphConnected(int n,vector<pair<int,int>>edges,int m){
    if(m<n-1){
        return -1;
    }
    //to store vertices that are directly connected to ith node
    vector<int>adj[n+1];
    //connect thegraph bidirectionally to both the nodes and storing which node is connected to which all nodes
    for(int i=0;i<m;i++){
        adj[edges[i].first].push_back(adj[edges[i].second]);
        adj[edges[i].second].push_back(adj[edges[i].first]);


    }//to see if the i th node visited
    vector<bool>visited(n+1,false);
    //no of connected components
    int count=0;
    for(int i=1;i<n;i++){
        if(visited[i]==false){
            queue<int> q;
            visited[i]=true;
            q.push(i);
            count++;
            while(!q.empty()){
                int first=q.front();
                q.pop();
                for(int v:adj[u]){
                    if(visited[v]==false){
                        visited[v]=true;
                        q.push(v);
                    }
                }
            }
        }
    }
            int ans=ctr-1;
            return ans;
        }
    

}