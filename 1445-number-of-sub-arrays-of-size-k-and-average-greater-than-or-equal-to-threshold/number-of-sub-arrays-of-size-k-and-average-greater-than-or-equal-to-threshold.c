int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int count = 0;
    int sum = 0;
    for(int i = 0; i<k; i++){
        sum = sum + arr[i];
    }
    if(sum >= (threshold*k)){
        count++;
    }
    for(int i = k; i<arrSize; i++){
        sum = sum + arr[i];
        sum = sum - arr[i - k];
        if(sum >= (threshold*k)){
            count++;
        }
    }
    return count;
}