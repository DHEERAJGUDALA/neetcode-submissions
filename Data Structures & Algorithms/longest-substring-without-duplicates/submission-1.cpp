class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans=0;
        set<char>st;
        int i=0,j=0;
        while(j<n){
         char c=s[j];
         if(st.find(c)==st.end()){
            st.insert(c);
         }else{
            while(st.find(c)!=st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(c);
         }
         int ss=st.size();
          ans=max(ans,ss);
          j++;
        }
        return ans;
    }
};
