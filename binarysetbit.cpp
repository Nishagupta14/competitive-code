//check if ith bit is set(1) or not 
#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    printBinary(9);
    int a,i;
    cin>>a;
    cin>>i;
    //CHECK ItH BIT IF SET
    if((a & (1<<i))!=0){
        cout<<"set bit";
    }
    else{
        cout<<"not set bit";
    }
    //TO SET A BIT 
    int setting_bit;
    int setting_no;
    cin>>setting_no;
    cin>>setting_bit;
    printBinary(setting_no |(1<<setting_bit));
     //to unset a bit
    printBinary(~setting_no);//inversion of a no 1 st method
    printBinary(~(1<<3));//3 rd bit is the only 0 bit
    printBinary(a & (~(1<<3)));// 9 ki 3 rd bit is unset
    printBinary(a & (~(1<<i)));// 9 ki ith bit is unset


    //toggle the bit
    //0 to 1 and 1 to 0 use Xor
    printBinary(a^(1<<2));//2 nd bit toggle 0 to 1 or 1 to 0
}