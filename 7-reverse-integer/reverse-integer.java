class Solution {
    public int reverse(int x) {
    int i;
     int sign= (x>0)?1:-1;
     x=Math.abs(x);
     int rev=0;
     for(i=0;x>0;i++){
        int dig=x%10;
        if(rev>(Integer.MAX_VALUE-dig)/10){
            return 0;
        }
        rev=rev*10+dig;
        x=x/10;
     }  
     return sign*rev;
    }

}