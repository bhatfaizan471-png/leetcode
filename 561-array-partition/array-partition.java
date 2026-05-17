class Solution {
    public int arrayPairSum(int[] nums) {
           int i;
           int sum=0;
        Arrays.sort(nums);
        for(i=0;i<nums.length;i=i+2){
            sum+=nums[i];
        }
return sum;
    }
}