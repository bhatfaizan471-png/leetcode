class Solution {
    public int thirdMax(int[] nums) {
        int i;
        List<Integer> list= new ArrayList<>();
        HashSet<Integer> set=new HashSet<>();
        for(i=0;i<nums.length;i++){
            set.add(nums[i]);
        }
        for(int x : set){
          list.add(x);
        }
        list.sort(null);
        if(list.size() < 3){
    return list.get(list.size() - 1);
    }
    return list.get(list.size() - 3);
    }

}