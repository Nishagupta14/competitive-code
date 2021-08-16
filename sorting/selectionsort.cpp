#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
/*Idea:

In an array that is sorted in ascending order, the first element is the minimum of all the n array elements, similarly the second element is the minimum of remaining n-1 elements, the third element is the minimum of remaining n-2 elements, and so on.

Algorithm - Considering ascending order

Selection Sort algorithm works on the above idea. 

Firstly, find the minimum element in the given array(arr[0...n-1]) and swap it with the element at the 0th index.
Then, in the remaining n-1 elements(arr[0...n-2]) again find the minimum element and swap it with the 1st index element.
After the ith iteration all the array elements from index 0 to i will be sorted, therefore we will continue the above process, to fill the remaining array positions with the correct element. 
Time Complexity: O(n^2) 
Space Complexity: O(1)
*/
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 //   int minindex; we can declare here also
    for(int i=0;i<n;i++){
         int minindex=i; //every time 1 st element is the min element in loop
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
                
                int temp=a[minindex];
                a[minindex]=a[j];
                a[j]=temp;
                
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}