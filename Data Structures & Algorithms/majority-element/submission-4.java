class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        int res=0,cnt=0;
        for(int num:nums){
           if(cnt==0){
            res=num;
           }
            cnt+=(res==num)?1:-1;
           
        }
        return res;
    }
}