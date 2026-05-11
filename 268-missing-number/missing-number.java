class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        int i;
        int tsum=(n*(n+1))/2;
        int arrsum=0;
        for(i=0;i<n;i++){
            arrsum+=nums[i];
        }
        int num=tsum-arrsum;
        return num;
    }
}