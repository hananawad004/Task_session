class Solution {
    public int minZeroArray(int[] nums, int[][] queries) {
        boolean allZero = true;
        for (int num : nums) {
            if (num != 0) {
                allZero = false;
                break;
            }
        }
        if (allZero) return 0; 

        for (int i = 0; i < queries.length; i++) {
            int li = queries[i][0];  
            int ri = queries[i][1];  
            int val = queries[i][2];

            for (int k = li; k <= ri; k++) {
                nums[k] -= Math.min(nums[k], val);  
            }

            allZero = true;
            for (int num : nums) {
                if (num != 0) {
                    allZero = false;
                    break;
                }
            }

            if (allZero) return i + 1;  
        }

        return -1;  
    }
}
