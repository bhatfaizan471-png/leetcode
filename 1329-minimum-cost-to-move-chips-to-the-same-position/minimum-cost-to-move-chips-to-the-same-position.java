class Solution {
    public int minCostToMoveChips(int[] position) {
        int odd = 0;
        int even = 0;
        int i;
        int len=position.length;
        for(i=0;i<position.length;i++){
        if(position[i]%2==0){
            even++;
        }
        else if(position[i]%2!=0){
        odd++;
        }
        }
        int minn=Math.min(even,odd);
    return minn;
    }
}