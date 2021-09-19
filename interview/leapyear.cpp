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
    int year;
    cin>>year;
    if((year % 4==0 ) && (year %100 !=0) || (year %400==0)){
        cout<<"Leap year"<<endl;
    }
    else{
    cout<<"Not Leap year"<<endl;
    }
    return 0;
}