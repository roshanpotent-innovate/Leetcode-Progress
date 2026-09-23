/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int *ans = malloc(numsSize*sizeof(int));
    int pos = 0;
    int neg = 1;
    for(int i = 0; i<numsSize; i++){
        if(nums[i] > 0){
            ans[pos] = nums[i];
            pos+=2;
        }else{
            ans[neg] = nums[i];
            neg+=2;
        }
    }
    *returnSize = numsSize;
    return ans;
}