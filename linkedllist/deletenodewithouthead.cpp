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
void linkedlistdelete(Linkedlist* node){
    //the concept we are using is we are pointing node ka next to a temp pointer so that address is not deleted
    //and then we are making that temp to be node with its value and address so now we can delete temp as we cant delete node because the adderss of previous full nodes will be gone if we delete it
    
    Linkedlist* temp=node->next;
    node=temp
    delete temp;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    return 0;
}