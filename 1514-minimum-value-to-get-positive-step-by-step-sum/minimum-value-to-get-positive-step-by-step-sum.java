class Solution {
    public int minStartValue(int[] nums) {
        int min=0;
        int i;
        int sum=0;
        int n=nums.length;
        for(i=0;i<n;i++){
         sum=sum+nums[i];
         if(sum<=min){
            min=sum;
         }
        }
        int minr=1-(min);
        return minr;
    }
}