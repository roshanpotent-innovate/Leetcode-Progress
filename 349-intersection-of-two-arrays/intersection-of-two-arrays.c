/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize = 0;

    if (nums1Size == 0 || nums2Size == 0) {
        return NULL;
    }

    int* smaller;
    int* larger;
    int smallSize, largeSize;
    
    if (nums1Size <= nums2Size) {
        smaller = nums1;
        larger = nums2;
        smallSize = nums1Size;
        largeSize = nums2Size;
    } else {
        smaller = nums2;
        larger = nums1;
        smallSize = nums2Size;
        largeSize = nums1Size;
    }

    int capacity = smallSize * 2 + 1;
    int* table = malloc(capacity * sizeof(int));
    bool* occupied = malloc(capacity * sizeof(bool));
    
    if (table == NULL || occupied == NULL) {
        free(table);
        free(occupied);
        return NULL;
    }

    for (int i = 0; i < capacity; i++) {
        occupied[i] = false;
    }

    for (int i = 0; i < smallSize; i++) {
        int key = smaller[i];
        int idx = key % capacity;

        if (idx < 0) {
            idx += capacity;
        }

        while (occupied[idx] && (table[idx] != key)) {
            idx = (idx + 1) % capacity;
        }

        if (occupied[idx] == false) {
            table[idx] = key;
            occupied[idx] = true;
        }
    }
    int* result = malloc(smallSize * sizeof(int));
    
    if (result == NULL) {
        free(table);
        free(occupied);
        return NULL;
    }

    for (int i = 0; i < largeSize; i++) {
        int key = larger[i];
        int idx = key % capacity;
        
        if (idx < 0) {
            idx += capacity;
        }

        while (occupied[idx]) {
            if (table[idx] == key) {
                break;
            }
            idx = (idx + 1) % capacity;
        }

        if (occupied[idx]) {
            bool dup = false;
            
            for (int j = 0; j < *returnSize; j++) {
                if (result[j] == key) {
                    dup = true;
                    break;
                }
            }
            
            if (!dup) {
                result[*returnSize] = key;
                (*returnSize)++;
            }
        }
    }
    
    free(table);
    free(occupied);
    return result;
}