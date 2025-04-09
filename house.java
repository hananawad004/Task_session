class Solution {
    public int rob(int[] nums) {
        if (nums.length == 0) return 0; 
        if (nums.length == 1) return nums[0]; 

        int prev1 = 0, prev2 = 0;

        for (int num : nums) {
            int temp = prev1;// 2 7 9 3 1 =>0/2/0
            prev1 = Math.max(prev2 + num, prev1);
            prev2 = temp;
        }

        return prev1;
    }
}
