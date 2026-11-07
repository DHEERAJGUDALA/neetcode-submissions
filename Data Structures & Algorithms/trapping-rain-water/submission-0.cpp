class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>sfx(n,0);
        sfx[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
          if(height[i]<=sfx[i+1]){
            sfx[i]=sfx[i+1];
          }else{
            sfx[i]=height[i];
          }
        }

        int maxi=height[0],ans=0;
        for(int i=1;i<n-1;i++){
         if(height[i]<maxi&&height[i]<sfx[i+1]){
         int mini = min(maxi,sfx[i+1]);
         ans+=(mini-height[i]);
         }
         maxi=max(maxi,height[i]);         
        }
        return ans;
    }
};
