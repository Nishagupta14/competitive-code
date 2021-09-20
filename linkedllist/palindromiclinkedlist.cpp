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
ListNode* middle(ListNode* head){
    if(head==NULL){
        return head;
    }
    ListNode* slow=head;
    ListNode* Fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode* reverse(ListNode* head){
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* nextptr=NULL;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    return prev;
}
bool compare(ListNode* head1,ListNode* head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}
bool ispalindromicll(ListNode* head ){
    if(head==NULL || head->next==NULL){
        return true;
    }
    ListNode* temp=head;
    ListNode* mid=middle(temp);
    ListNode* head2=reverse(mid);
    return compare(head,head2);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    return 0;
}