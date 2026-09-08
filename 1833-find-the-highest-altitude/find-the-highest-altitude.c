int largestAltitude(int* gain, int gainSize) {
    int* pf = (int*)malloc((gainSize+1) * sizeof(int));
    pf[0] = 0;
    for(int i = 1; i<=gainSize;i++){
        pf[i] = pf[i-1]+gain[i-1];
    }
    int max = pf[0];
    for(int i = 1;i<=gainSize; i++){
        if(max<pf[i]) max= pf[i];
    }
    return max;
}