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
int minindex(int a[],int s,int e){
    int ans;
    int temp=INT_MAX;
    while(s<=e){
        if(a[s]<=temp){
            temp=a[s];
            ans=s;
        }
        s++;
    }
    return ans;
}
int maxindex(int a[],int s,int n){
    int ans;

    int temp=INT_MIN;
    while(s<=e){
        if(a[i]>temp){
            temp=a[s];
            ans=s;
        }
        s++;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[]={70000,10000,50000,300000};
    int n=4;
    int buyindex=minindex(a,0,n-2);
    int sellindex=maxindex(a,buyindex+1,n-1);
    cout<<"land purchased"<<a[buyindex]<<endl;
     cout<<"Land SOLD with amount RS "<<a[sellIndex]<<endl;
        cout<<"Profit Earned RS "<<(a[sellIndex]-a[buyIndex]) * 0.1 <<endl;

    return 0;
}
//10/100=0.01
