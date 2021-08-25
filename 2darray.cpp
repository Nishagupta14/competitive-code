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
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   
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

   for(int i=0;i<v.size();i++){
       for(int j=0;j<v[i].size();j++){
           cout<<v[i][j];
       }
       cout<<endl;
   }
    return 0;
}