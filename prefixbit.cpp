/*Given a positive integer n, print all n-bit binary numbers having more 1’s than 0’s for any prefix of the number.

Input Format

Input-1: Read N

Constraints

n>0

Output Format

print all n-bit binary numbers having more 1’s than 0’s

Sample Input 0

3
Sample Output 0

111
110
101
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printBinary(int n,int one ,int zero,string output){
  if(n==0){
      cout<<output<<endl;
      return;
  }
    string output1=output;
    output1.push_back('1');
    printBinary(n-1,one+1,zero,output1);
     string output0=output;
    if(one>zero){
       
        output0.push_back('0');
        printBinary(n-1,one,zero+1,output0);
    }
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int one=0,zero=0;
    printBinary(n,one,zero,"");
    return 0;
}
