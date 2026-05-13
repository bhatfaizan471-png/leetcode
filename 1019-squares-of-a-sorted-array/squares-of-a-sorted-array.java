class Solution {
    public int[] sortedSquares(int[] nums) {
        List<Integer> res=new ArrayList<>();
        int j=0;
        int  n=nums.length;
        int i=0;
        for(i=0;i<n;i++){
        nums[i]=nums[i]*nums[i];
        }
        for(int num:nums){
            res.add(num);
        }
        Collections.sort(res);
        for(int k:res){
            nums[j++]=k;
                    }
        return  nums;
    }
}