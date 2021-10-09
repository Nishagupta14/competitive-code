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
/*concept ye hai ki do part mein divide hain array sorted and unsorted to jo index is sorted part ka lst elemenet
to jb hum uski value apni current key value se check karrahe agar wo choti hai to loop mein jaarahe aur saare element ek ek check kararahe jb tk ussese bade element hai loop mein se
shift kararahe and jb ssare badi value khtm to hum last mein key ko insert karaderahe hain

Insertion sort runs in O(n)O(n) time in its best case and runs in O(n^2)O(n 
2
 ) in its worst and average cases.*/
void insertion(int a[],int n){
    for(int i=0;i<n;i++){
        int key=a[i];
        int index=i-1;
        while(index>-1 && arr[index]>key){
            arr[index+1]=arr[index];
            index=index-1;

        }
        arr[index+1]=key;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    return 0;
}