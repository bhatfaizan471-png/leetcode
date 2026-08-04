class Solution {
    public boolean checkPerfectNumber(int num) {
        int sum=0;
        int i;
        for(i=1;i<num;i++){
            if(num%i==0){
                sum=sum+i;
            }
        }
        if(sum==num){
            return true;
        }
        else{
        return false;
        }
    }
}