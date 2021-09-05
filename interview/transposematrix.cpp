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
 void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
                
            }
        }
    }
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[100][100];
  
   int m,n;
   cin>>m>>n;
   for(int i=0;i<m;i++){
       for(int j=0;i<n;j++){
           cin>>a[i][j];
       }
       }
   
    return 0;
}