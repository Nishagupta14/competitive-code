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
   
    //if elements are equal
  
     int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int element;
    cin>>element;
    int start=0,end=n-1;
    //ascending order
    if(a[start]<a[end]){
        while(start<=end){
            int mid=(start+end)/2;
            if(a[mid]==element){
                cout<<mid<<endl;
                break;
            }
            else if(element<a[mid]){
                end=mid;
            }
            else {
                start=mid+1;
            }
        }
    }
    //if equal elements all
     else if(a[start]==a[end]){
        if(element==a[start]){
            cout<<start<<endl;
        }
    }
    //descending order
    else{
        while(start<=end){
            int mid=(start+end)/2;
            if(a[mid]==element){
                cout<<mid<<endl;
                break;
            }
            else if(element<a[mid]){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
    }
    return 0;
    
}