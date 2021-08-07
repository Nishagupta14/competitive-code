  /*LONGEST PALINDROME
  Input: s = "abccccdd"
Output: 7
Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
*/
/*1st method*/
int longestPalindrome(string s) {
       bool  odd=false;
        int count=0;
        int arr[52]={0};
        char small='a',big='A';
            for(int i=0;i<s.length();i++){
                if(s[i]<small){
                    arr[s[i]-big+26]++;
                }
                else{
                    arr[s[i]-small]++;
                }
            }
        for(int i=0;i<52;i++){
            if(arr[i]%2==0){
                count=count+arr[i];
            }
            else{
                odd=true;
                if(arr[i]!=1){
                    count=count+arr[i]-1;
                }
            }
        }
        if(odd){
            count++;
        }
        return count;
    }
    /* 2nd method
    */
    int longestPalindrome(string s){
        unordered_map<int,int>mp;
        int res=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(mp[s[i]]%2==0){
                res +=mp[s[i]]++;
                mp[s[i]]=0;
            }        }
            for(auto x:mp){
                if(x.second==1){
                    res++;
                    break;
                }


            }
    return res;
    }
