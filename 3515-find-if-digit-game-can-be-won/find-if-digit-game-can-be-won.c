bool canAliceWin(int* nums, int numsSize) {
    int num=0;
    int ss =0;
    int ds=0;
    for(int i =0;i<numsSize;i++){
    if(nums[i]<10){
    ss=ss+nums[i];
    }
    else{
        ds+=nums[i];
    }
    }
    int ts=ss+ds;
    if(ss>ts-ss || ds>ts-ds){
        return 1;
    }
    else{
        return 0;
    }
}
