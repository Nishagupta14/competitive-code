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
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int k;
   cin>>k;
  
     int i=0,j=0;
        int sum=0;
        int maxSum=0;
        while(j<n){
            sum+=a[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                maxSum=max(maxSum,sum);
                sum-=a[i];
                j++;
                i++;
            }
        }

   cout<<maxSum<<endl;
   
    return 0;
}