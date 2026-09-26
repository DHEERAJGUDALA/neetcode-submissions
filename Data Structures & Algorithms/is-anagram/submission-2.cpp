class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size(),m=t.size();
        unordered_map<char,int>mp;
        int countofequals=0;
        for(int i=0;i<n;i++){
           mp[s[i]]++;
        }
        for(int j=0;j<m;j++){
            if(mp[t[j]]>0)
            mp[t[j]]--;
            else
            return false;
        }
        for(auto x:mp){
            if(x.second%2!=0)
            return false;
        }
        return true;
    }
};
