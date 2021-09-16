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
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<j<<" ";
       }
       cout<<endl;
   }
   
   /*
  input - 5
  output-
    1 2 3 4 
    2 3 4 
    3 4 
    4
    */
   for(int i=1;i<=n;i++){
       for(int j=i;j<n;j++){
           cout<<j<<" ";
       }
       cout<<endl;
   }
   
   /*
    1 
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5 */

   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<i<<" ";
       }
       cout<<endl;
   }
   /*
   output-
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
    */
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<"*"<<" ";
       }
       cout<<endl;
   }
   /*
    5 4 3 2 1 
    4 3 2 1 
    3 2 1 
    2 1 
    1
*/
   for(int i=5;i>=1;i--){
       for(int j=i;j>=1;j--){
           cout<<j<<" ";
       }
       cout<<endl;
   }
   /*
   5 5 5 5 5 
    4 4 4 4 
    3 3 3 
    2 2 
    1 
    */
  for(int i=5;i>=1;i--){
       for(int j=i;j>=1;j--){
           cout<<i<<" ";
       }
       cout<<endl;
   }
   /*
   * * * * * 
    * * * * 
    * * * 
    * * 
    *
*/
  for(int i=5;i>=1;i--){
       for(int j=i;j>=1;j--){
           cout<<"*"<<" ";
       }
       cout<<endl;
   }
   /*
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15 
*/
   int k=1;
   for(int i=1;i<=5;i++){
       for(int j=1;j<=i;j++){
           cout<<k++<<" ";
       }
       cout<<endl;
   }
/*

        * 
       * * 
      * * * 
     * * * * 
    * * * * * 
    
    */
   int k = 2 * n - 2;
 
    //number of rows
    for (int i = 0; i < n; i++) {
 
        //  number spaces

        for (int j = 0; j < k; j++)
            cout << " ";
 
        // Decrementing k after each loop
        k = k - 1;
 
        // number of columns
        for (int j = 0; j <= i; j++) {
            // Printing stars
            cout << "* ";
        }
 
        
        cout << endl;
    }
    //2nd approach
 for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    

    return 0;
}
