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
class Solution {
public:
    /*Assume that we have linked list 1 → 2 → 3 → Ø, we would like to change it to Ø ← 1 ← 2 ← 3.

While you are traversing the list, change the current node's next pointer to point to its previous element. Since a node does not have reference to its previous node, you must store its previous element beforehand. You also need another pointer to store the next node before changing the reference. Do not forget to return the new head reference at the end!
   */ ListNode* reverseList(ListNode* head) {
      ListNode* prev=NULL;
       ListNode* curr=head;
       ListNode* nexttemp=NULL;
       while(curr!=NULL){
           //making curr->next address point to nexttemp
           nexttemp=curr->next;
            //now we want prev to be pointed by curr->next
           curr->next=prev;
           //swap curr,prev and nexttemp
           prev=curr;
           curr=nexttemp;
       }
       return prev;
   }
           
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    return 0;
}