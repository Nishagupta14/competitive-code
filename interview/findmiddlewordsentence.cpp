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
int count(string s){
    int n=s.length();
    int ans=1;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            ans++;
        }
    }
    return ans;
}
string answer(string s,int check){
    int i=0;
    int counting=0;
    string temp="";
    while(counting!=check){ //to get the location of word
        if(s[i]==' '){
            counting++;
        }
        i++;
    }
    while(s[i]!=' '){
        temp +=s[i];
        i++;
    }
    return temp;
}
string evenodd(string s,int wordscount){
    int n=s.length();
    int check=wordscount/2;
    if(wordscount%2==1){ //odd
        return answer(s,check);
    }
    else{ //even no of words
        string s1=answer(s,check); //to
        string s2=answer(s,check-1); //here
        return( (s1.length()>s2.length())?s1:s2);
    }

}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
   string s="Welcome to here well";
   int wordscount=count(s);
    cout<<answer(s,wordscount);
    return 0;
}