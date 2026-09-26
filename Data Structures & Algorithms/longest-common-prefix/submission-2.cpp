class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int n=strs.size();
        for(int i=1;i<n;i++){
            int stsize=strs[i].size();
            if(stsize==0)return "";
            if(stsize<ans.size()){
                ans.erase(stsize,ans.size()-stsize);
            }
            for(int j=0;j<min(ans.size(),strs[i].size());j++){
                if(ans[j]!=strs[i][j]){
                    ans.erase(j,ans.size()-j);
                    break;
                }
            }
        }
        return ans;
    }
};