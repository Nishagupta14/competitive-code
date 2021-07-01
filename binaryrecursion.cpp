/*binary search using recusion*/
#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>v,int low ,int high,int element){
    if(high-low>1){
        int mid=(low+high)/2;
        if(v[mid]==element){
            return mid;
        }
        else if(v[mid]<element){
            return binarysearch(v,mid+1,high,element);
        }
        return binarysearch(v,low,mid,element);
    }

    return -1;
    
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int element;
    cin>>element;
    cout<<binarysearch(v,0,n-1,element)<<endl;
}