/*
lower_bound :element index which is equal or greater then the element
upper_bound :element index which is equal or less then the element
6
2 3 4 6 7 8
4
2 lower bound 4
3 upper bound 6
*/
#include<bits/stdc++.h>
using namespace std;
int upper_bound(vector<int>&v,int element){//check the element if not found chrck the next upper element
    int low=0,high=v.size()-1;
    while(high-low>1){
        int mid=(high+low)/2;
        if(v[mid]<=element){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    if(v[low]>element){
        return low;
    }
    else if(v[high]>element){
        return high;
    }
    else {
        return -1;
    }
}
int lower_bound(vector<int>&v,int element){
    int low=0,high=v.size()-1;
    while(high-low>1){  // if we are left with only two elements we can directly compare them no need to go inside this loop
        int mid=(high+low)/2;
        if(v[mid]<element){ //greater and equal we can keep
            low=mid+1;

        }
        else{
            high=mid;
        }


    }
    if(v[low]>=element){
        return low;
    }
    else if(v[high]>=element){
        return high;
    }
    else{
        return -1;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int  i=0;i<n;i++){
        cin>>v[i];

    }
    int element;
    cin>>element;
    int lb=lower_bound(v,element);
    cout<<lb<<" lower bound "<<(lb!=-1?v[lb]:-1)<<endl;
    int ub=upper_bound(v,element);
    cout<<ub<<" upper bound "<<(lb!=-1?v[ub]:-1)<<endl;
    return 0;
}