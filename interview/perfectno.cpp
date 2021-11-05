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
    int i=1,sum=0;
    while(i<n){
        if(n%i==0){
            sum=sum+i;
          //  i++;
        }
        i++;
    }
    if(sum==n){
        cout<<i<<" "<<"perfect no";
    }
    else{
        cout<<"not perfect no";
    }
    return 0;
}