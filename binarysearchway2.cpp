#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int element;
    cin>>element;
    int low=0,high=n-1;
    int mid;
    while(high-low>1){
        int mid=(high+low)/2;
        if(v[mid]<element){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    if(v[low]==element){
        cout<<low<<endl;
    }
    else if(v[high]==element){
        cout<<high<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

}