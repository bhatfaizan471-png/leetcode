class Solution {
    public int findMiddleIndex(int[] nums) {
        int lsum=0;
        int rsum=0;
        int n=nums.length;
        int i;
        int total=0;
        for(i=0;i<n;i++){
           total+=nums[i]; 
        }
        for(i=0;i<n;i++){
         rsum=total-lsum-nums[i];
        if(rsum==lsum){
            return i;
        }
        lsum+=nums[i];
        }
        return -1;
    }
}