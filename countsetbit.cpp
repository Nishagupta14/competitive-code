//count no of set bits in a no
//input 9
//output 00000001101
//2
#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    int a;
    cin>>a;
    printBinary(a);
    int count1=0,count0=0;
    for(int i=31;i>=0;--i){ //indexing start from right in this so we are using last index here
        if((a & (1<<i))!= 0){
            count1++;
        }
        
        
    }
    cout<<count1<<endl;
}