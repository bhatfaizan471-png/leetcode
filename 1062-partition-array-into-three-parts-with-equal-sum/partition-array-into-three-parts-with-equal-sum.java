class Solution {
    public boolean canThreePartsEqualSum(int[] arr) {
        int i;
        int n=arr.length;
        int total=0;
        int count=0;
        for(i=0;i<n;i++){
            total+=arr[i];
        }
        if(total%3!=0){
            return false;
        }
     int target=total/3;
     int temp=0;
      for(i=0;i<n;i++){
        temp+=arr[i];
           if(temp==target){
            count++;
            temp=0;
           }
        }
      if(count>=3){
        return true;
      }
        return false;
    }

}