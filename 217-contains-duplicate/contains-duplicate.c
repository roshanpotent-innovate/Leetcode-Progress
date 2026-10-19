#include <stdbool.h>
#include <stdlib.h>
bool containsDuplicate(int* nums, int numsSize) {
    if((numsSize == 0)||(numsSize == 1)){
        return false;
    }
    int capacity = numsSize * 2 + 1;
    int *table = malloc(capacity * sizeof(int));
    bool *occupied = malloc(capacity * sizeof(bool));
    if(table == NULL || occupied == NULL){
        free(table);
        free(occupied);
        return false;
    }
    for(int i = 0; i < capacity; i++){
        occupied[i] = false;
    }
    for(int i = 0; i < numsSize; i++){
        int key = nums[i];
        int idx = (unsigned int)key % capacity;
        while(occupied[idx]){
            if(table[idx] == key){
                return true;
            }
            idx = (idx + 1) % capacity;
        }
        table[idx] = key;
        occupied[idx] = true;
    }
    free(table);
    free(occupied);
    return false;
}