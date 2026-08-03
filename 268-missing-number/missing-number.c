int missingNumber(int* nums, int numsSize) {
    int expected_sum = 0;

    for(int i = 0; i <= numsSize; i++){
        expected_sum = expected_sum + i;
    }

    int actual_sum = 0;

    for(int i = 0; i < numsSize; i++){
        actual_sum = actual_sum + nums[i];
    }

    return expected_sum - actual_sum;;
}