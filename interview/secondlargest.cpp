#include<bits/stdc++.h>
using namespace std;
void secondlargest(int arr[],int n){
    sort(arr,arr+n);
    int largest=arr[n-1];
    for(int i=n-2;i>0;i--){
        if(arr[i]!=largest){
            cout<<arr[i]<<endl;
            return;
        }
    }
}
//second method
void secondlargest2(int arr[],int n){
    int largest=-1,secondlargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=largest){
            if(arr[i]>secondlargest){
                secondlargest=arr[i];
            }
            else if(secondlargest==-1){
                secondlargest=arr[i];
            }
        }
    }
    cout<<secondlargest<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    secondlargest(a,n);
    secondlargest2(a,n);

}    