/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int i=0;
    int j=n;
    int k=0;
    while(i<n){
        ans[k++]=nums[i++];
        ans[k++]=nums[j++];
    }
    *returnSize = numsSize;
    return ans;
}