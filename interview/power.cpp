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
int power(int x,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power(x,n/2)*power(x,n/2);
    }
    else{
        return x*power(x,n/2)*power(x,n/2); //making odd no even
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int x;
    cin>>x;
    cout<<power(x,n);
    return 0;
}