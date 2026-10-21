/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize = 0;

    if(nums1Size == 0 ||nums2Size == 0){
        return NULL;
    }

    int *smallest;
    int *largest;
    int smallSize;
    int largeSize;

    if(nums1Size <= nums2Size){
        smallest = nums1;
        smallSize = nums1Size;
        largest = nums2;
        largeSize = nums2Size;
    }else{
        smallest = nums2;
        smallSize = nums2Size;
        largest = nums1;
        largeSize = nums1Size;
    }

    int capacity = smallSize * 2 + 1;
    int *table = malloc(capacity * sizeof(int));
    int *occupied = calloc(capacity, sizeof(int));
    int *count = calloc(capacity, sizeof(int));
    int *result = malloc(smallSize * sizeof(int));

    if(table == NULL || occupied == NULL || count == NULL || result == NULL){
        free(table);
        free(occupied);
        free(count);
        free(result);
        return NULL;
    }
    for(int i = 0; i<smallSize; i++){
        int key = smallest[i];
        int idx = key % capacity;
        
        if(idx < 0){
            idx += capacity;
        }
        
        while(occupied[idx] && (table[idx] != key)){
            idx = (idx + 1) % capacity;
        }
        
        if(!occupied[idx]){
            table[idx] = key;
            occupied[idx] = 1;
        }
        
        count[idx]++;
    }

    for(int i = 0; i<largeSize; i++){
        int key = largest[i];
        int idx = key % capacity;
        
        if(idx < 0){
            idx += capacity;
        }
        
        int start = idx;

        while(occupied[idx] && (table[idx] != key)){
            idx = (idx + 1) % capacity;

            if(idx == start){
                break;
            }
        }

        if(occupied[idx] && (table[idx] == key) && count[idx] > 0){
            result[*returnSize] = key;
            (*returnSize)++;
            count[idx]--;
        }
    }

    free(table);
    free(occupied);
    free(count);
    return result;
}