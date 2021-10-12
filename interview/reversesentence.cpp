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
//1)saare words alag alg krke reverse karo
void reversesentence(string s){
  
 // T(n) = O(n) solution below  
    int i=0;
    string temp = " ";
    stack <string> st;
    while(i<s.length()){
        if(s[i]==' ' || s[i]=='\0'){
            st.push(temp);
            temp = "";
        }
        temp = temp + s[i];
        i++;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin,s);
    reversesentence(s);
    return 0;
}