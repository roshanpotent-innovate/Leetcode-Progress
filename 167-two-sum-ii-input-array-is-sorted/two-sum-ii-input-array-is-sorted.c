/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdlib.h>
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    int left = 0;
    int right = numbersSize - 1;
    int sum;
    while(left < right){
        sum = numbers[left] + numbers[right];
        if(sum < target){
            left++;
        }else if(sum > target){
            right--;
        }else{
            *returnSize = 2;
            result[0] = left + 1;
            result[1] = right + 1;
            return result;
        }
    }
    free(result);
    *returnSize = 0;
    return NULL;
}