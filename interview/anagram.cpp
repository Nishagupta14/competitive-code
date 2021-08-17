   map<string, int> d;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i + 1; j <= s.length(); j++) {
            string subs = s.substr(i, j - i);
            sort(subs.begin(), subs.end());
            d[subs] += 1;
        }
    }
    
    // For each sorted substring added to d, if there x amounts of it (x > 1), 
    // then we can create x choose 2 pairs => x * (x - 1) / 2
    int pairs = 0;
    for (auto v : d) {
        if (v.second > 1) {
            pairs += v.second * (v.second - 1) / 2;
        }
    }
    
    return pairs;
    }
    int sherlockAndAnagrams(string s) 
{
    map<string, int> freq;
    int count=0;
    string w="";
    for(int i=0; i<s.length(); i++)
    {
        for(int len=1; len<=(s.length()-i); len++)
        {
            w = s.substr(i,len);
            sort(w.begin(), w.end());
            if(freq.find(w) != freq.end())
                count += freq[w];
            freq[w]++;
        }
    }
    return count;
    int sherlockAndAnagrams(string s) {
    int window,j,k,count=0;
    for(window=1;window<s.length();window++)   
    {
        for(j=0;j<s.length()-window;j++)
            {
                string string1 = s.substr(j,window);
                sort(string1.begin(),string1.end());
                string string2;
                for(k=j+1;k<s.length()-window+1;k++)
                {
                    
                    string2 = s.substr(k,window);
                    sort(string2.begin(),string2.end());
                    if(string1.compare(string2)==0)
                        count++;
                }
                
            }
    }
    return count;
}
int sherlockAndAnagrams(string s) {
    map<pair<int, string>, int> m{};
    for (int len = 1; len < s.length(); ++len) {
        for (int j = s.length() - len; j >= 0; --j) {
            auto ss = s.substr(j, len);
            sort(ss.begin(), ss.end());        
            auto it = m.find({len, ss});
            if (it != m.end())
                ++it->second;
            else
                m.insert({{len, ss}, 1});
        }
    }
    int count = 0;
    for (const auto& p : m) {
        count += (p.second * (p.second - 1)) / 2 ;
    


static int sherlockAndAnagrams(String s)
    {   
        int l=s.length(),c=0;
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<=l;j++)
            {
                String a=s.substring(i,j);
                int la=a.length();
                for(int k=0;k<=l-la;k++)
                {
                    if(k!=i)
                    if(check(a,s.substring(k,k+la)))c++;
                }
            }
        }
        return c/2;
    }
    static boolean check(String a,String b)
    {
        int ch[]=new int[26];
        for(int i=0;i<a.length();i++)
            ch[a.charAt(i)-97]++;
        for(int i=0;i<a.length();i++)
            ch[b.charAt(i)-97]--;
        for(int i=0;i<26;i++)
            if(ch[i]!=0)return false;
        return true;
    }
