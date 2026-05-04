int maxDistance(int* colors, int colorsSize) {
    int maxd=0;
    int i,j;
    for(i=0;i<colorsSize;i++){
    for(j=i+1;j<colorsSize;j++){
    if(colors[i]!=colors[j]){
        int dis=abs(i-j);
        if(dis>maxd){
            maxd=dis;
        }
    }
    }
    }
    return maxd;
}