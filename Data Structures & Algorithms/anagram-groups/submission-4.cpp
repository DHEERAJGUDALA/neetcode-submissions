class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            vector<int>freq(26,0);
            for(int j=0;j<strs[i].size();j++){
                freq[strs[i][j]-'a']++;
            }
            string tmp=to_string(freq[0]);
            for(int k=1;k<26;k++){
                tmp=tmp+","+to_string(freq[k]);
            }
            mp[tmp].push_back(strs[i]);
        }
        for(const auto &v:mp){
            ans.push_back(v.second);
        }
        return ans;
    }
};
