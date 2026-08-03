double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0;
    double dsum;
    double maxsum;
    for (int j = 0; j < k; j++) {
        sum = nums[j] + sum;
    }
    dsum = (double)sum / k;
    maxsum = dsum;
    for (int i = 1; i + k - 1 < numsSize; i++) {
        sum = sum - nums[i - 1] + nums[i + k - 1];
        dsum = (double)sum / k;
        if (maxsum < dsum) {
            maxsum = dsum;
        }
    }
    return maxsum;
}