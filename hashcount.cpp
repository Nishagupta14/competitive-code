/*using hashing print count of that no in array
contraints
1<=N<=10^5
1<=a[i]<=10^7 //if range was 10^9 then we can't use hashing
1<=0<=10^5
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hsh[N];
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
int q;
cin>>q;
while(q--){
    int x;
    cin>>x;
    cout<<hsh[x]<<endl;
}
}