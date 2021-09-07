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
     
        vector<int>spiral(vector<vector<int>> &mat){
        
        int top = 0;
        int right= mat[0].size()-1;
        int left = 0;
        int bottom = mat.size() - 1;
        int dir=0;
        vector<int>ans;
        while (top <= bottom && left <= right) {
            // Traverse Right
            if(dir==0){
                for(int i=left;i<=right;i++){
                    ans.push_back(mat[top][i]);
                    top++;
                }
            }
            else if(dir==1){
                for(int i=top;i<=bottom;i++){
                    ans.push_back(mat[i][right]);
                    right--;
                }
            }
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    ans.push_back(mat[bottom][i]);
                    bottom--;
                }
            }
            else if(dir==3){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(mat[i][left]);
                    left++;
                }
            }
            dir=(dir+1)%4;
        }
            return ans;

        
        }
        

int main(){
    
   
   int rows,coloumns;
   cin>>rows>>coloumns;
   int value;
   vector<vector<int>>v;
   for(int i=0;i<rows;i++){
       vector<int>temp;
       for(int j=0;j<coloumns;j++){
           cin>>value;
           temp.push_back(value);
       }
       v.push_back(temp);
      
   }
 vector<int>ans;
 ans=spiral(v);
 for(auto &x:ans){
     cout<<x<<"";
 }
   
    return 0;
}