#include<bits/stdc++.h>
using namespace std;
void prime_range(int m,int n){
    for(int i=m;i<=n;i++){
        if(i==1||i==0){
            continue;
        }
        int flag=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<i<<" ";
        }
        
    }
}
void prime_no(int n){
    int flag=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"no is not prime"<<endl;
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<"no is prime"<<endl;

    }
}
int main(){
    //input for prime no element in range
    int n;
    cin>>n;
    prime_no(n);
    int m,l;
    cin>>m>>l;
    prime_range(m,l);
}