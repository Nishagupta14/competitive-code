#include<bits/stdc++.h>
using namespace std;
vector<string>valid;
//no of open should be equal to  or close brackets
void generate(string &s,int open,int close){
   if(open==0 && close==0){
       valid.push_back(s);
       return;

   }
    //in new string s open bracket and close bracket present
    if(open>0){
        s.push_back('(');
        generate(s,open-1,close);
        s.pop_back();  //backtrack so the string is same as passed before  
    }
    if(close >0 ){ //close bracket is not empty check
        
        if(open <close){ //tells open brackets are more then closing
            s.push_back(')');
            generate(s,open,close-1);
            s.pop_back();

        }

    }
}
int main(){
    int n;
    cin>>n;
    string s;
    generate(s,n,n);
    for(auto ele:valid){
        cout<<ele<<endl;
    }
    

}