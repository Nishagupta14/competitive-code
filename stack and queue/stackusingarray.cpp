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
#define n 5
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
class Stack{
    int *arr;
    int top;
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow"<<endl;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"UNDERFLOW"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
//second method
class Stack{
    int top;
    int arr[5];
    public:
    Stack(){
        top=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return 1;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if(top==4){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int x){
        if(top==4)//top==n-1
        {
            cout<<"Full"<<endl;
        }
        else{
        top++;
        arr[top]=x;
        }
    }
    int pop(){
        if(top==-1){
            cout<<"underflow"<<endl;
        }else{
            // or we can only do is top--
            int popvalue=arr[top];
            arr[top]=0;
            top--;
        }



    }
    int peek(int pos){
        if(top==-1){
            cout<<"stack underflow";
        }
        else{
            return arr[pos];
        }

    }
    void change(int pos,int val){
        arr[pos]=val;
    }
    void display(){
        for(int i=4;i>0;i--){
            cout<<arr[i]<<endl;
        }
    }


}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   Stack st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   cout<<st.Top()<<endl;
   st.pop();
   cout<<st.Top()<<endl;
   cout<<st.empty()<<endl;

   //second method
   Stack st;
   int option,position,value;
   do{
       cout<<"enter option";
       
       cout<<"1.push"<<endl;       
       cout<<"1.pop"<<endl;       
       cout<<"1.top"<<endl;       
cin>>option;
switch(option){
    case 1:
    cout<<"enter value";
     cin>>value;
     st.push(value);
     break;
     case 2:
    cout<<"enter value";
     
     st.pop(value);
     break;
     case 3:
    cout<<"enter value";
     if(st.empty()){
         cout<<"stack is empty";
     }
     else{
         cout<<"stack is not empty";
     }

     break;
     }
     default:
     cout<<"invalid choice"<<endl;

   }while(option!=0);
    return 0;
}