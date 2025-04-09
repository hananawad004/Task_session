class Solution {
 
    public int maximumCount(int[] nums) {
        int co=0,ce=0;
       for(int i=0;i<nums.length;i++){
      if(nums[i]>0){
      ce++;
      }
      else if(nums[i]<0){
        co++;
      }
       } 
       return Math.max(co, ce);
        
    }
}