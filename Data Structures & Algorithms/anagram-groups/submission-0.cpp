class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string tmp=strs[i];
            sort(tmp.begin(),tmp.end());
              mp[tmp].push_back(strs[i]);            
        }
        vector<vector<string>>ans;
        for(auto v:mp){
          ans.push_back(v.second);
        }
        return ans;
    }
};
