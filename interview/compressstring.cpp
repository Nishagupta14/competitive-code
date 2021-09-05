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
/*Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1
Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa
*/
string compressstring(string s){
    string str="";
    int count =1;
    for(int i=0;i<s.length();i++){
        char prev=s[i-1];
        char curr=s[i];
        if(curr==prev){
            count++;

        }else{
        if(count>1){
                str +=to_string(count);
                count=1;
                
            }
            str+=curr;
        }
    }
    if(count>1){
        str +=to_string(count);
        count=1;
    }
    return str;
    

    }
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    
     getline(cin,str);
    cout<<compressstring(str);
    return 0;
}