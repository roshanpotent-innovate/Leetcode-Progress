int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    if (k <= 1)
        return 0;

    int l = 0;
    int count = 0;
    int mul = 1;

    for (int i = 0; i < numsSize; i++) {
        mul *= nums[i];

        while (mul >= k) {
            mul /= nums[l];
            l++;
        }

        count += i - l + 1;
    }

    return count;
}
