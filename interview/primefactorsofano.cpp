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
void primeFactors(int n){
  // Write your code here
  while(n%2==0){
 	cout<<2<<endl;
    n=n/2;
    }
    
  
  
    for(int i=3;i<=sqrt(n);i=i+2){
      if(n%i==0){
        cout<<i<<endl;
        n=n/i;
      }
    
  }
  if(n>2){
    cout<<n<<endl;
  }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    return 0;
}