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



// definition of getGCD() function  
int getGCD( int n1, int n2)  
{  
// here if statement checks the given number is not equal to 0.  
if ( n1 == 0 || n2 == 0)  
return 0;  
  
// if n1 equal to n2, return n1  
if (n1 == n2)  
return n1;  
  
// if n1 is greater than n2, execute the followed statement  
if ( n1 > n2)  
return getGCD (n1 - n2, n2);  
  
return getGCD (n1, n2 - n1);  
}  
  
// definition of getLCM() function  
int getLCM (int n1, int n2)  
{  
/* divide the multiplication of n1 and n2 by getGCD() function to return LCM. */      
return (n1 * n2) / getGCD (n1,n2);  
}  
  
int main()  
{  
// declare local variables    
int n1, n2;  
cout << " Enter two positive numbers: ";  
cin >> n1 >> n2; // get numbers from user  
  
// print the LCM(n1, n2)  
cout << " \n LCM of " <<n1 << " and " << n2 << " is " << getLCM(n1, n2);  
return 0;  
}   
    return 0;
}