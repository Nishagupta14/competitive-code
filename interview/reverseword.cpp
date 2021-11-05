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
    string str;
    cin>>str;
   
      
void revWords(string str){ 
    stack<char> st; 
  
    for(int i = 0; i < str.length(); ++i){ 
        if(str[i] != ' '){ 
            st.push(str[i]);
        }
  
        else{ 
            while(st.empty() == false){ 
                cout << st.top(); 
                st.pop(); 
            } 
            cout << " "; 
        } 
    } 
  
    while(st.empty() == false){ 
        cout << st.top(); 
        st.pop(); 
    } 
} 
    return 0;
}