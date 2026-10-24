class Solution {
    public int majorityElement(int[] nums) {
        int ans=1,maxi=1,digit=nums[0];
        Arrays.sort(nums);
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]==nums[i+1]){
                maxi++;
            }else{
                if(maxi>ans){
                    digit=nums[i];
                    ans=maxi;
                    maxi=1;
                }
            }
        }
              if(maxi>ans){
                    digit=nums[nums.length-1];
                    ans=maxi;
                    maxi=1;
                   }
      return digit;
    }
}