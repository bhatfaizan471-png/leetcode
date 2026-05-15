class Solution {
    public int pivotIndex(int[] nums) {
        int i;
        int n=nums.length;
        int rgsum=0;
        int lfsum=0;
        int total=0;
        for(i=0;i<n;i++){
         total+=nums[i];
        }
    for(i=0;i<n;i++){
        rgsum=total-lfsum-nums[i];
        if(rgsum==lfsum){
            return i;
        }
        lfsum+=nums[i];
    }
    return -1;
    }
}