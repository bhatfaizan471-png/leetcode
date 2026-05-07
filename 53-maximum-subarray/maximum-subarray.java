class Solution {
    public int maxSubArray(int[] nums) {
        int cs=0;
        int ms=nums[0];
        int i;
        for(i=0;i<nums.length;i++){
            cs=cs+nums[i];
            if(cs>ms){
                ms=cs;
            }
            if(cs<0){
                cs=0;
            }
        }
        return ms;
    }
}