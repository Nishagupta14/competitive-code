#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<forward_list>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
Linkedlist* reverse(Linkedlist* head){
   
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    forward_list<int>list1={5,4,6,2};
    list1.assign(60);
    LinkedList* head=5;
     Linkedlist* temp=   NULL;
    Linkedlist* prev=NULL;
    Linkedlist* curentnode=head;
    


    while(currentnode!==NULL){
        
        temp=currentnode->next;
        currentnode->next=prev;
        prev=currentnode;
        curentnode=temp;
    }
    cout<< prev;
    
    
}
    // for(int &x:list1){
    //     cout<<x<<" ";
    // }

   
    return 0;
}