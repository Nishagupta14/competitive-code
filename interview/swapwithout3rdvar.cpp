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
void swap(int &x,int &y){
    x=x*y; //x=5,y=10 //x=5*10=50
    y=x/y;//y=50/10 ,y=5
    x=x/y;//x=50/5 ,x=10
    
    //2nd method x=5,y=10
    x=x+y; //x=15 (5+10)    
    y=x-y; //y=5 (15-10)    
    x=x-y; //x=10 (15-5)    
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<y<<endl;
    return 0;
}