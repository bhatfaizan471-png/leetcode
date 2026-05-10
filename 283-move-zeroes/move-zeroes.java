class Solution {
    public void moveZeroes(int[] nums) {
        int len=nums.length;
        int j=0;
        int i;
        for(i=0;i<len;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        for(i=j;i<len;i++){
            nums[j++]=0;
    }
    }
}