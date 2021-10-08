#include<bits/stdc++.h>
using namespace std;

void prime_in_range(int n){
  
    int flag;
    for(int i=2;i<=n;i++){
        flag=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }

}
bool check(int n){
    int flag=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        return true;
    }
    else{
    return false;
}
}

int main(){
    int n;
    cin>>n;
    prime_in_range(n);
    if(check(n)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }





  

}