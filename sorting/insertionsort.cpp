/*One of the simplest methods to sort an array is an insertion sort. An example of an insertion sort occurs in everyday life while playing cards. To sort the cards in your hand you extract a card, shift the remaining cards, and then insert the extracted card in the correct place. This process is repeated until all the cards are in the correct sequence. Following algorithm will describe the insertion sort procedure: -

for i = 1 to n-1
   Pick element at position i 
   insert it into sorted sequence from index 0 to i-1.
end
Worst and Average Case Time Complexity: O(n^2)
Best Case Time Complexity: O(n)
*/
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
    int i,key,j;
     int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        key=a[i];
        j=i-1; //pointer to sorted array elements
        while(j>=0 && a[j]>key){
            //find correct position of element
            a[j+1]=a[j];//shift all lesser elements
            j=j-1;
        }
        a[j+1]=key;//place element extracted to position
    }
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}
    return 0;
}