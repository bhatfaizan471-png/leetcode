class Solution {
    public int removeElement(int[] nums, int val) {
        int len = nums.length;
        int k = 0;
        int i;
        int count=0;
        for (i = 0; i < len; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
                count++;
            }
        }
        for (i = k; i<len; i++) {
            nums[k] = nums[i];
            k++;
        }
        return count;
    }
}