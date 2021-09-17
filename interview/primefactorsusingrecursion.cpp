/* add c++ headers if necessary*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void prime(int num){
  
  
        int i = 2;
        if( num == 1 )
                return;
        while( num%i != 0 )
                i++;
        cout<<i<<endl;
       prime(num/i);
}
int main()
{
  int n;
  cin>>n;
  prime(n);
   return 0;
}
/* add tail for c++ if necessary*/