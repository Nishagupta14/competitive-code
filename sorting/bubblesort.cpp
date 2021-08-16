/*This algorithm repeatedly goes through the array, compares adjacent elements and swaps them if they are in the wrong order.
Algorithm - Sort in ascending order
Repeatedly traverse the array, and in each pass compare the adjacent elements. If the order of adjacent elements is wrong (i.e. arr[j] > arr[j+1]), then swap them.
Suppose the length of the array is n. Now to sort the array we need to do at max n-1 passes(traversals) on it.
After the first pass, the largest element will move to the last index (i.e. index n-1).
Similarly, after the second pass, the second largest element will move to the second last index (i.e. index n-2).
After the ith pass, the ith largest element will move to the index n-i. That means after the ith pass, the last i elements in the array will be at their correct positions. Therefore in the next pass, we need to check the adjacent elements only till the n-i-1 index.
Finally, after doing all the passes the given array will be sorted. */
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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){//for passes
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;            }
        }

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
} 
/*
method 2 
optimized way
void bubbleSort(int arr[], int n)
{
   for (int i = 0; i < n-1; i++)
   {  
       bool swapped = false;
       // last i elements are already at the correct position
       for (int j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
               swap(&arr[j], &arr[j+1]);
               swapped = true;
           }
       }
       // If no swapping happened in the current pass, then break
       if (swapped == false)
           break;
   }
}
 */