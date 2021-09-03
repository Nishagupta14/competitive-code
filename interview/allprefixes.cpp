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
void printallprefixes(char input[]){
    /*eg abcd
    a-  (0,0)
    ab-(0,1)
    abc -(0,2)
    abcd-(0,3)
    */

    for(int i=0;input[i]!='\0';i++){ //represent end index
        for(int j=0;j<=i;j++){//j represnt start index of my prefix
            cout<<input[j];

        }
        cout<<endl;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    char input[50];
    cin>>input;
    //cin.getline(input,6);
    printallprefixes(input);
    
    return 0;
}