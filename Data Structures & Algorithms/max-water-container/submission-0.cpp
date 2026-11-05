class Solution {
public:
    int maxArea(vector<int>& heights) {
        long long ans=0;
        int s=0,e=heights.size()-1;
        while(s<e){
            long long area= (e-s)*(min(heights[s],heights[e]));
            ans=max(ans,area);
            if(heights[s]<heights[e])s++;
            else e--;
        }
        return (int)ans;
    }
};
