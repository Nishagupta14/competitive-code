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
void  wordsfreq(string str){
    string word="";
    map<string,int>m;
    for(int i=0;i<str.length();i++){
        //if whitespace mean word traversing done 
        if(str[i]==' '){
            //if word not found add the word and its frequency
            if(m.find(word)==m.end()){
                m.insert(make_pair(word,1));
                word="";
            }
            //if word found then plus increment the frequency
            else{
                m[word]++;
                word="";
            }
        }
//if word traversing is ongoing adding str letters to word to make the complete word
else{
    word +=str[i];
}
    } 
    //at last we have no white space so we use this for last word
    if(m.find(word)==m.end()){
                m.insert(make_pair(word,1));
                
            }
            else{
                m[word]++;
                
            }    
  

    for(auto &x:m){
        cout<<x.first<<":"<<x.second<<endl;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
     getline(cin,str);
    wordsfreq(str);
    return 0;
}