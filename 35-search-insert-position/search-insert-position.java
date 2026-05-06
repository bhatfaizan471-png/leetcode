class Solution {
    public int searchInsert(int[] nums, int target) {
        int len=nums.length;
        int i;
        int flag=0;
        for(i=0;i<len;i++){
            if(target==nums[i]){
                flag=i;
            }
        else if(target>nums[i]){
          flag=i+1;
                 }
        }
        return flag;
    }
}