class Solution {
    public int commonFactors(int a, int b) {
        int i=0;
        int count=0;
        for(i=1;i<=1000;i++){
            if(a%i==0 && b%i==0){
                count+=1;
            }
        }
    return count;
    }
}