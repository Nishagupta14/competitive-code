#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<list>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;

class LinkedList{
    public :
    int data;
    LinkedList* next;
};

LinkedList* root=NULL;

void insert(int value){
    LinkedList *nw = new LinkedList();
    nw->next = NULL;
    nw->data = value;
    if(root == NULL){
        root = nw;
    }else{
        LinkedList* ptr = root;
        while(ptr->next != NULL){
            ptr=ptr->next;
        }
        ptr->next=nw;
    }
}

void display(){
    LinkedList* ptr = root;
    while(ptr!=NULL){
        cout<<ptr->data<< " ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        int value;
        cin>>value;
        insert(value);
        display();
    }
    return 0;
}