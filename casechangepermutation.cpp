/*printing all permutations witth change case.
Sample Input 0

ab
Sample Output 0

ab
aB
Ab
AB*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<string>ans;
void generate(string s,int i){
 
    if(i==s.length()){
        ans.push_back(s);
        return;
    }
    generate(s,i+1);
    char ch=s[i];
    s[i]=islower(ch)?toupper(ch):tolower(ch);
    generate(s,i+1);

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    generate(s,0);
    for(auto x:ans){
        cout<<x<<endl;
    }
    return 0;
}
